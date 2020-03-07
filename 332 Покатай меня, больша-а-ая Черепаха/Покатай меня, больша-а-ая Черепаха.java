import java.math.BigInteger;
import java.util.Scanner;

public class Dispastcher {

 public static void main(String[] args) {
  Scanner a = new Scanner(System.in);
  int m,n;
  m = a.nextInt();
  n = a.nextInt();
  m++;
  n++;
  BigInteger[][] d = new BigInteger[m][n];
  int i,j; 
  m--;
  n--;
  for(i = 0; i <= m; i++)
   d[i][0] = BigInteger.valueOf(1);
  for(j = 0; j <= n; j++)
   d[0][j] = BigInteger.valueOf(1);
  for(i = 1; i < m; i++){
   for(j=1;j<n;j++){
    d[i][j] = d[i-1][j].add(d[i][j-1]);
   }
  }
  System.out.println(d[m-1][n-1]);
 }

}