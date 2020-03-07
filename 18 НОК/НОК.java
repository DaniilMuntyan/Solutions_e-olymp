import java.util.*;
import java.math.*;
 
public class Main
{
  public static int gcd(int a, int b)
  {
    return (b == 0) ? a : gcd(b,a % b);
  }
  public static void main(String[] args)
  {
    Scanner con = new Scanner(System.in);
    int n = con.nextInt();
    Vector<Integer> m = new Vector<Integer>();
    for(int i = 0; i < n; i++)
      m.add(Integer.valueOf(con.nextInt()));
 
    for(int i = 0; i < n; i++)
    for(int j = i + 1; j < n; j++)
    {
      int temp = gcd(m.get(i),m.get(j));
      m.set(j,Integer.valueOf(m.get(j)/temp));
    }
   
    BigInteger res = new BigInteger("1");
    for(int i = 0; i < n; i++)
      res = res.multiply(BigInteger.valueOf(m.get(i)));
  
    System.out.println(res);
  }
}