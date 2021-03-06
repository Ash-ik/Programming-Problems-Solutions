#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class BigInteger
{

private:
   enum {MAXNUM=999999999,BASE=1000000000,MAXLENGTH=32};
    long val[MAXLENGTH];
   long length;
public:


   BigInteger(long n=0);
   BigInteger(const string &str);
   BigInteger(long *pVal,long len);
   BigInteger(const BigInteger &p);


   BigInteger & operator =(const BigInteger &rval);
   BigInteger & operator =(long rval);
   BigInteger & operator =(const string &str);

   virtual ~BigInteger(){}

   long Compare(const BigInteger &rval);
   long Compare(long rval);
   long Compare(const string &rval);

    BigInteger Sqrt();

   BigInteger operator +(const BigInteger &rval);
   BigInteger operator +(long rval);
   BigInteger operator +(const string &rval);
   BigInteger &operator +=(const BigInteger &rval);
   BigInteger &operator +=(long rval);
   BigInteger &operator +=(const string &rval);

   BigInteger operator -(const BigInteger &rval);
   BigInteger operator -(long rval);
   BigInteger operator -(const string &rval);
   BigInteger &operator -=(const BigInteger &rval);
   BigInteger &operator -=(long rval);
   BigInteger &operator -=(const string &rval);

   BigInteger operator *(const BigInteger &rval);
   BigInteger operator *(long rval);
   BigInteger operator *(const string &rval);
   BigInteger &operator *=(const BigInteger &rval);
   BigInteger &operator *=(long rval);
   BigInteger &operator *=(const string &rval);

   BigInteger operator /(const BigInteger &rval);
   BigInteger operator /(long rval);
   BigInteger operator /(const string &rval);
   BigInteger &operator /=(const BigInteger &rval);
   BigInteger &operator /=(long rval);
   BigInteger &operator /=(const string &rval);

   BigInteger operator %(const BigInteger &rval);
   BigInteger operator %(long rval);
   BigInteger operator %(const string &rval);
   BigInteger &operator %=(const BigInteger &rval);
   BigInteger &operator %=(long rval);
   BigInteger &operator %=(const string &rval);

   BigInteger &operator ++();
   BigInteger operator ++(int);
   BigInteger &operator --();
   BigInteger operator --(int);

   bool operator >(const BigInteger &rval);
   bool operator >(long rval);
   bool operator >(const string &rval);

   bool operator <(const BigInteger &rval);
   bool operator <(long rval);
   bool operator <(const string &rval);

   bool operator >=(const BigInteger &rval);
   bool operator >=(long rval);
   bool operator >=(const string &rval);

   bool operator <=(const BigInteger &rval);
   bool operator <=(long rval);
   bool operator <=(const string &rval);

   bool operator ==(const BigInteger &rval);
   bool operator ==(long rval);
   bool operator ==(const string &rval);

   bool operator !=(const BigInteger &rval);
   bool operator !=(long rval);
   bool operator !=(const string &rval);

   friend ostream & operator<<(ostream &out,const BigInteger &p);
   friend istream & operator>>(istream &in,BigInteger &p);

   bool isPrime(BigInteger);   //Returns 0 if the bigInteger is not prime,or returns 1
    BigInteger factorial(BigInteger);  //Returns factorial of a bigInteger number
    BigInteger gcd(BigInteger,BigInteger); //Returns the gcd of two bigInteger number
    BigInteger lcm(BigInteger,BigInteger);  //Returns the lcm of two bigInteger number

};

BigInteger::BigInteger(long n)
{
    val[0]=n;
    length=1;
}

BigInteger::BigInteger(const string &str)
{
    long tab[10]={1,10,100,1000,10000,100000,1000000,
      10000000,100000000,1000000000};
   long i,j,k,l;
   long tmp;
    l=str.length();
   length=(l-1)/9+1;
   for(i=0;i<length;i++)
   {
      tmp=0;
      for(j=l-i*9-1,k=0;j>l-1-(i+1)*9&&j>=0;j--,k++)
      {

         tmp+=tab[k]*(str[j]-'0');
      }
      val[i]=tmp;
   }
}
BigInteger::BigInteger(long *pVal,long len)
{
    long i;
    length=len;
    for(i=0;i<len;i++)
        val[i]=pVal[i];
}

BigInteger::BigInteger(const BigInteger &p)
{
    length=p.length;
    long i=0;
    while(i<length)
    {
        val[i]=p.val[i];
        ++i;
    }
}
BigInteger & BigInteger:: operator =(const BigInteger &rval)
{
    length=rval.length;
    long i=0;
    for(;i<length;++i)
        val[i]=rval.val[i];
        return *this;
}
BigInteger & BigInteger::operator =(long rval)
{
    length=1;
    val[0]=rval;
    return *this;
}
BigInteger & BigInteger::operator =(const string &str)
{
    long tab[10]={1,10,100,1000,10000,100000,1000000,
      10000000,100000000,1000000000};
   long i,j,k,l;
   long tmp;
    l=str.length();
   length=(l-1)/9+1;
   for(i=0;i<length;i++)
   {
      tmp=0;
      for(j=l-i*9-1,k=0;j>l-1-(i+1)*9&&j>=0;j--,k++)
      {

         tmp+=tab[k]*(str[j]-'0');
      }
      val[i]=tmp;
   }
   return *this;
}

long BigInteger::Compare(const BigInteger &rval)
{
    //this==rval return 0;
   //this>rval return 1;
   //this<rval return -1;
   long i;
   if(length>rval.length)
      return 1;
   else
   {
      if(length<rval.length)
         return -1;
      else
      {
         for(i=length-1;i>=0;i--)
         {
            if(val[i]>rval.val[i])
               return 1;
            else
               if(val[i]<rval.val[i])
                  return -1;
         }
         return 0;
      }
   }

}

long BigInteger::Compare(long rval)
{
    BigInteger tmp(rval);
    return Compare(tmp);
}

long BigInteger::Compare(const string &rval)
{
    BigInteger tmp(rval);
    return Compare(tmp);
}

BigInteger BigInteger::Sqrt()
{
    BigInteger x;
    if(length==1)
    {
        x.length=1;
        x.val[0]=(long)sqrt((double)val[0]);
    }
    else
    {
        BigInteger m,dx,t;
        long cmp;
       x.length=(length-1)/2+1;
       x.val[x.length-1]=(long)sqrt((double)val[length-1]);
       if(length%2==0)
            x.val[x.length-1]*=31622;
         while(1)
         {
           m=operator/(x);
           cmp=m.Compare(x);
           if(cmp==0)
                break;
           else
           {
              if(cmp==1)
               {
                    dx=(m-x)/2;
                   x+=dx;
                 }
                 else
                 {
                  dx=(x-m)/2;
                    x-=dx;
                 }
             }
         }
      }
    return x;
}
BigInteger BigInteger::operator +(const BigInteger &rval)
{
    BigInteger sum;
    long tmp;
   long n=0;
   if(length>rval.length)
      tmp=rval.length;
   else
      tmp=length;
   long i;
   long carry=0;
   for(i=0;i<tmp;++i)
   {
      sum.val[i]=val[i]+rval.val[i]+carry;
      if(sum.val[i]>MAXNUM)
      {
         sum.val[i]-=MAXNUM+1;
         carry=1;
      }
      else
         carry=0;
   }
   n=tmp;
   for(;i<length;++i)
   {
      sum.val[i]=val[i]+carry;
      if(sum.val[i]>MAXNUM)
      {
         sum.val[i]-=MAXNUM+1;
         carry=1;
      }
      else
      {
         carry=0;
      }
      ++n;
   }
   for(;i<rval.length;++i)
   {
      sum.val[i]=rval.val[i]+carry;
      if(sum.val[i]>MAXNUM)
      {
         sum.val[i]-=MAXNUM+1;
         carry=1;
      }
      else
      {
         carry=0;
      }
      n++;
   }
   if(carry==1)
   {
      sum.val[i]=1;
      n++;
   }
   sum.length=n;
    return sum;

}

BigInteger BigInteger::operator +(long rval)
{
    BigInteger tmp(rval);
    return operator+(tmp);
}

BigInteger BigInteger::operator +(const string &rval)
{
    BigInteger tmp(rval);
    return operator+(tmp);
}

BigInteger & BigInteger::operator +=(const BigInteger &rval)
{
    BigInteger sum=this->operator+(rval);
    this->operator=(sum);
    return *this;
}

BigInteger & BigInteger::operator +=(long rval)
{
    BigInteger tmp(rval);
    BigInteger sum=this->operator+(tmp);
    this->operator=(sum);
    return *this;
}

BigInteger & BigInteger::operator +=(const string &rval)
{
    BigInteger tmp(rval);
    BigInteger sum=this->operator+(tmp);
    this->operator=(sum);
    return *this;
}

BigInteger BigInteger::operator -(const BigInteger &rval)
{
    BigInteger sub;
    long tmp;
   long n=0;
   if(Compare(rval)==0)
      return BigInteger(0);
   if(Compare(rval)==1)
      tmp=rval.length;
   else
      tmp=length;
   long i;
   long carry=0;
   for(i=0;i<tmp;++i)
   {
      sub.val[i]=val[i]-rval.val[i]-carry;
      if(sub.val[i]<0)
      {
         sub.val[i]+=BASE;
         carry=1;
      }
      else
         carry=0;
   }
   n=tmp;
   for(;i<length;++i)
   {
      sub.val[i]=val[i]-carry;
      if(sub.val[i]<0)
      {
         sub.val[i]+=BASE;
         carry=1;
      }
      else
      {
         carry=0;
      }
      n++;
   }
   for(;i<rval.length;++i)
   {
      sub.val[i]=rval.val[i]-carry;
      if(sub.val[i]<0)
      {
         sub.val[i]+=BASE;
         carry=1;
      }
      else
      {
         carry=0;
      }
      n++;
   }
   if(sub.val[n-1]==0)
      n--;
   sub.length=n;
    return sub;
}

BigInteger BigInteger::operator -(long rval)
{
    BigInteger tmp(rval);
    return operator-(tmp);
}

BigInteger BigInteger::operator -(const string &rval)
{
    BigInteger tmp(rval);
    return operator-(tmp);
}

BigInteger & BigInteger::operator -=(const BigInteger &rval)
{
    BigInteger sub=this->operator-(rval);
    this->operator=(sub);
    return *this;
}

BigInteger & BigInteger::operator -=(long rval)
{
    BigInteger tmp(rval);
    BigInteger sub=this->operator-(rval);
    this->operator=(sub);
    return *this;
}

BigInteger & BigInteger::operator -=(const string &rval)
{
    BigInteger tmp(rval);
    BigInteger sub=this->operator-(rval);
    this->operator=(sub);
    return *this;
}

BigInteger BigInteger::operator *(const BigInteger &rval)
{
    BigInteger mul;
    long an=length;
   long bn=rval.length;
   long i,j;
   long mul_carry,add_carry;
   long long tmp;
   for(i=0;i<MAXLENGTH;++i)
      mul.val[i]=0;
   for(i=0;i<an;++i)
   {
      mul_carry=0;
      add_carry=0;
      for(j=0;j<bn;++j)
      {
         tmp=(long long)(val[i])*(long long)(rval.val[j])+mul_carry;
         mul.val[i+j]+=tmp%BASE+add_carry;
         if(mul.val[i+j]>=BASE)
         {
            mul.val[i+j]-=BASE;
            add_carry=1;
         }
         else
         {
            add_carry=0;
         }
         mul_carry=tmp/BASE;
      }
      mul.val[i+j]+=mul_carry+add_carry;
   }
   for(i=MAXLENGTH-1;i>=0;--i)
      if(mul.val[i]!=0)
         break;
   if(i>=0)
      mul.length=i+1;
   else
      mul.length=1;
    return mul;
}

BigInteger BigInteger::operator *(long rval)
{
    BigInteger tmp(rval);
    return operator*(tmp);
}

BigInteger BigInteger::operator *(const string &rval)
{
    BigInteger tmp(rval);
    return operator*(tmp);
}

BigInteger & BigInteger::operator *=(const BigInteger &rval)
{
    BigInteger mul=this->operator*(rval);
    this->operator=(mul);
    return *this;
}

BigInteger & BigInteger::operator *=(long rval)
{
    BigInteger mul=this->operator*(rval);
    this->operator=(mul);
    return *this;
}

BigInteger & BigInteger::operator *=(const string &rval)
{
    BigInteger mul=this->operator*(rval);
    this->operator=(mul);
    return *this;
}

BigInteger BigInteger::operator /(const BigInteger &rval)
{
    BigInteger div,mod;
    long tmp=Compare(rval);
    if(tmp==1)
    {
        long i,j,k;
        div.length=length-rval.length+1;
        BigInteger table[32];
        table[0]=rval;
        for(i=1;i<32;++i)
           table[i]=table[i-1]+table[i-1];

        for(i=length-1,j=rval.length-2;j>=0;--i,--j)
           mod.val[j]=val[i];
        mod.length=rval.length-1;

        for(i=length-rval.length;i>=0;--i)
        {
             for(j=mod.length-1;j>=0;--j)
             {
                mod.val[j+1]=mod.val[j];
            }
            mod.val[0]=val[i];
            if(mod.val[mod.length]!=0)
                ++mod.length;
            for(j=30,div.val[i]=0,k=(1<<30);j>=0;--j,k=(k>>1))
            {
                if(mod.Compare(table[j])>=0)
                {
                    div.val[i]|=k;
                    mod-=table[j];

                }
            }

        }
        while(div.val[div.length-1]==0)
           --div.length;
    }
    else
    {
        if(tmp==-1)
        {
            div=0;
        }
        else
        {
           div=1;
          }
    }
    return div;
}

BigInteger BigInteger::operator /(long rval)
{
    BigInteger tmp(rval);
    return operator/(tmp);
}

BigInteger BigInteger::operator /(const string &rval)
{
    BigInteger tmp(rval);
    return operator/(tmp);
}

BigInteger & BigInteger::operator /=(const BigInteger &rval)
{
    BigInteger div=this->operator/(rval);
    this->operator=(div);
    return *this;
}

BigInteger & BigInteger::operator /=(long rval)
{
    BigInteger div=this->operator/(rval);
    this->operator=(div);
    return *this;
}

BigInteger & BigInteger::operator /=(const string &rval)
{
    BigInteger div=this->operator/(rval);
    this->operator=(div);
    return *this;
}

BigInteger BigInteger::operator %(const BigInteger &rval)
{
    BigInteger div,mod;
    long tmp=Compare(rval);
    if(tmp==1)
    {
        long i,j,k;
        div.length=length-rval.length+1;
        BigInteger table[32];
        table[0]=rval;
        for(i=1;i<32;++i)
           table[i]=table[i-1]+table[i-1];

        for(i=length-1,j=rval.length-2;j>=0;--i,--j)
           mod.val[j]=val[i];
        mod.length=rval.length-1;

        for(i=length-rval.length;i>=0;--i)
        {
             for(j=mod.length-1;j>=0;--j)
             {
                mod.val[j+1]=mod.val[j];
            }
            mod.val[0]=val[i];
            if(mod.val[mod.length]!=0)
                ++mod.length;
            for(j=30,div.val[i]=0,k=(1<<30);j>=0;--j,k=(k>>1))
            {
                if(mod.Compare(table[j])>=0)
                {
                    div.val[i]|=k;
                    mod-=table[j];

                }
            }

        }

    }
    else
    {
        if(tmp==-1)
        {
            mod=*this;
        }
        else
        {
           mod=0;
          }
    }

    return mod;

}

BigInteger BigInteger::operator %(long rval)
{
    BigInteger tmp(rval);
    return operator%(tmp);
}

BigInteger BigInteger::operator %(const string &rval)
{
    BigInteger tmp(rval);
    return operator%(tmp);
}

BigInteger & BigInteger::operator %=(const BigInteger &rval)
{
    BigInteger mod=this->operator%(rval);
    this->operator=(mod);
    return *this;
}

BigInteger & BigInteger::operator %=(long rval)
{
    BigInteger mod=this->operator%(rval);
    this->operator=(mod);
    return *this;
}

BigInteger & BigInteger::operator %=(const string &rval)
{
    BigInteger mod=this->operator%(rval);
    this->operator=(mod);
    return *this;
}

BigInteger & BigInteger::operator ++()
{
    *this+=1;
    return *this;
}

BigInteger BigInteger::operator ++(int)
{
    BigInteger tmp(*this);
    *this+=1;
    return tmp;
}

BigInteger & BigInteger::operator --()
{
    *this-=1;
    return *this;
}

BigInteger BigInteger::operator --(int)
{
    BigInteger tmp(*this);
    *this-=1;
    return tmp;
}

bool BigInteger::operator >(const BigInteger &rval)
{
    if(Compare(rval)==1)
        return true;
    else
        return false;
}

bool BigInteger::operator >(long rval)
{
    if(Compare(rval)==1)
        return true;
    else
        return false;
}

bool BigInteger::operator >(const string &rval)
{
    if(Compare(rval)==1)
        return true;
    else
        return false;
}

bool BigInteger::operator <(const BigInteger &rval)
{
    if(Compare(rval)==-1)
        return true;
    else
        return false;
}

bool BigInteger::operator <(long rval)
{
    if(Compare(rval)==-1)
        return true;
    else
        return false;
}

bool BigInteger::operator <(const string &rval)
{
    if(Compare(rval)==-1)
        return true;
    else
        return false;
}

bool BigInteger::operator >=(const BigInteger &rval)
{
    if(Compare(rval)>=0)
        return true;
    else
        return false;
}

bool BigInteger::operator >=(long rval)
{
    if(Compare(rval)>=0)
        return true;
    else
        return false;
}

bool BigInteger::operator >=(const string &rval)
{
    if(Compare(rval)>=0)
        return true;
    else
        return false;
}

bool BigInteger::operator <=(const BigInteger &rval)
{
    if(Compare(rval)<=0)
        return true;
    else
        return false;
}

bool BigInteger::operator <=(long rval)
{
    if(Compare(rval)<=0)
        return true;
    else
        return false;
}

bool BigInteger::operator <=(const string &rval)
{
    if(Compare(rval)<=0)
        return true;
    else
        return false;
}

bool BigInteger::operator ==(const BigInteger &rval)
{
    if(Compare(rval)==0)
        return true;
    else
        return false;
}

bool BigInteger::operator ==(long rval)
{
    if(Compare(rval)==0)
        return true;
    else
        return false;
}

bool BigInteger::operator ==(const string &rval)
{
    if(Compare(rval)==0)
        return true;
    else
        return false;
}

bool BigInteger::operator !=(const BigInteger &rval)
{
    if(Compare(rval)!=0)
        return true;
    else
        return false;
}

bool BigInteger::operator !=(long rval)
{
    if(Compare(rval)!=0)
        return true;
    else
        return false;
}

bool BigInteger::operator !=(const string &rval)
{
    if(Compare(rval)!=0)
        return true;
    else
        return false;
}

ostream & operator<<(ostream &out,const BigInteger &n)
{
    long i=n.length-1;
    out<<n.val[i];
   for(--i;i>=0;--i)
   {
        out.width(9);
        out.fill('0');
        out<<n.val[i];
    }
    return out;
}

istream & operator>>(istream &in,BigInteger &p)
{
    string str;
    in>>str;
    p=str;
    return in;
}

bool BigInteger::isPrime(BigInteger input_number)
{
    if(input_number==1)
        return  false;
    if(input_number==2)
        return true;
    BigInteger i,loop_limit=input_number.Sqrt();
    for(i=2;i<loop_limit;i++)
    {
        if(input_number%i==0)
        return false;
    }
    return true;
}

BigInteger BigInteger::factorial(BigInteger input_n)
{
    BigInteger fact=1,i;
    for(i=1;i<=input_n;i++)
        fact*=i;
    return fact;
}

BigInteger BigInteger::gcd(BigInteger a,BigInteger b)
{
//    BigInteger tmp;
//    if(a==0)
//       return b;
//      while(a!=0)
//      {
//          tmp=b%a;
//          if(tmp==0)
//             return a;
//          else
//        {
//            a=a%tmp;
//            b=tmp;
//        }
//    }
//    return b;
if(b==0) return a;
return gcd(b,a%b);
}

BigInteger BigInteger::lcm(BigInteger a,BigInteger b)
{
    return (a*b)/gcd(a,b);
}


BigInteger fibonacci(BigInteger limit)
{
    BigInteger i,first_num=0,second_num=1,result;
    for(i=1;i<=limit;i++)
    {
        result=first_num+second_num;
        first_num=second_num;
        second_num=result;
    }
    return result;
}


int main()
{
    BigInteger a,b,c;
    cout<<"Input two number:";
    cin>>a>>b;
    cout<<"\n\nA ="<<a<<"\nB ="<<b<<"\n\n";

    cout<<"A+B ="<<a+b<<endl;
    cout<<"A-B ="<<a-b<<endl;
    cout<<"A*B ="<<a*b<<endl;
    cout<<"A/B ="<<a/b<<endl;
    cout<<"A%B ="<<a%b<<endl;

    cout<<"\nA++ ="<<a++<<endl;
    cout<<"++B ="<<++b<<endl;
    cout<<"--A ="<<--a<<endl;
    cout<<"B-- ="<<b--<<endl;

    cout<<"\nsqrt(a)="<<a.Sqrt()<<endl;

    if(b<=10000)
    cout<<"B! (factorial) ="<<b.factorial(b)<<endl;
    cout<<"\ngcd(a,b) ="<<a.gcd(a,b)<<endl;
    cout<<"lcm(a,b) ="<<a.lcm(a,b)<<endl;

    if(a<=10000 && b<=10000)
    {
        cout<<"\nAth fibonacci :"<<fibonacci(a)<<endl;
        cout<<"Bth fibonacci :"<<fibonacci(b)<<endl;
    }

    cout<<"\nComparison between A & B :"<<endl;
    if(a<b)
        cout<<"A is less than B\n";
    else if(a>b)
        cout<<"A is greater than B\n";
        else
            cout<<"A is equal to B\n";
    cout<<"\nif A & B is prime or not:\n";
    if(a.isPrime(a))
        cout<<"A is Prime\n";
    else cout<<"A is not Prime\n";
    if(b.isPrime(b))
        cout<<"B is Prime\n";
    else cout<<"B is not Prime\n";
    return 0;
}

