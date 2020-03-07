import java.math.*;
import java.util.Scanner;
public class Main{
 public static BigInteger cnk(int n, int k)
 {
  BigInteger fenzi = new BigInteger("1");
  BigInteger fenmu = new BigInteger("1");
  for(int i=n-k+1; i <= n; i++){
   String s = Integer.toString(i);
   BigInteger stobig = new BigInteger(s);
   fenzi = fenzi.multiply(stobig);
  }
  for(int j=1; j <= k; j++){
   String ss = Integer.toString(j);
   BigInteger stobig2 = new BigInteger(ss);
   fenmu = fenmu.multiply(stobig2);
  }
  BigInteger result = fenzi.divide(fenmu);
  return result;
 }
    public static void main(String args[]) {
     Scanner sc = new Scanner(System.in);
     int x, k;
     x = sc.nextInt();
     k = sc.nextInt();
     x /= 5;
     System.out.println(cnk(x+k,x));
    }
}