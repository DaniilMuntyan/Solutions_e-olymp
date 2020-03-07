import java.math.BigInteger;
import java.util.Scanner;

public class Main{
    public static void main(String args[]) {
     BigInteger r;
     int a;
     Scanner sc = new Scanner(System.in);
     a = sc.nextInt();
     r = BigInteger.ONE;
     r = r.add(BigInteger.ONE);
     r = r.pow(a*a);
     r = r.subtract(BigInteger.ONE);
     System.out.println(r);
     
     
    }   
}