/*UVA 713 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {

    public static void main(String[] args) throws IOException {
    	InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringBuffer sb=new StringBuffer("");
        String m="";
        int cases=Integer.parseInt(br.readLine());
        while(cases--!=0)
        {
        	String x=br.readLine();
        	String p[]=x.split(" ");
        	BigInteger n1=new BigInteger(reverse(p[0]));
        	BigInteger n2=new BigInteger(reverse(p[1]));
        	BigInteger ans=n1.add(n2);
        	ans=new BigInteger(reverse(ans.toString()));

        	sb.append(ans.toString()+"\n");
        }
            System.out.print(sb);

}
    static String reverse(String h){
        StringBuilder sb=new StringBuilder(h);
        return sb.reverse().toString();
    }



    }
