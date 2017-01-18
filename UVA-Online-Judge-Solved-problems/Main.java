/*UVA 424 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {

    public static void main(String[] args) throws IOException {
    	InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringBuffer sb=new StringBuffer("");
        BigInteger x=BigInteger.ZERO;
        while(true)
        {
        	BigInteger temp=new BigInteger(br.readLine());
        	if(temp.compareTo(BigInteger.ZERO)==0)
				break;
        	
        	x=x.add(temp);
        	
        }
        System.out.println(x.toString());
            
}	
	
    }