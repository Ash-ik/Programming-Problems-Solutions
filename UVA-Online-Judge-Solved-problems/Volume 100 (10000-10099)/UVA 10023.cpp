#include<iostream>
#include<string>
#include<math.h>
#include<stdio.h>
using namespace std;

class BigInteger
{

private:
   enum {MAXNUM=999999999,BASE=1000000000,MAXLENGTH=32};
    long val[MAXLENGTH];
   long length;
public:
   //////////////////////////////////
   BigInteger(long n=0);
   BigInteger(const string &str);
   BigInteger(long *pVal,long len);
   //////////////////////////////////
   BigInteger(const BigInteger &p);
   /////////////////////////////////
   BigInteger & operator =(const BigInteger &rval);
   BigInteger & operator =(long rval);
   BigInteger & operator =(const string &str);
   //////////////////////////////////
   virtual ~BigInteger(){}
   ///////////////////////////////////
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

   bool operator ==(const BigInteger &rval);
   bool operator ==(long rval);
   bool operator ==(const string &rval);

   bool operator !=(const BigInteger &rval);
   bool operator !=(long rval);
   bool operator !=(const string &rval);

   friend ostream & operator<<(ostream &out,const BigInteger &p);
   friend istream & operator>>(istream &in,BigInteger &p);


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
int main()
{
    int testCase;
    BigInteger a;
    cin>>testCase;
    while(testCase--)
    {
        cin>>a;
        cout<<a.Sqrt();
        cout<<"\n\n";
    }
    return 0;
}

