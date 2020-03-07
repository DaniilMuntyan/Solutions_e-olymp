import java.util.*;
public class Dispastcher {
 public static void main(String[] args) {
  Scanner c = new Scanner(System.in);
  int day,month,year;
  day = c.nextInt();
  month = c.nextInt();
  year = c.nextInt();
  month--;
  GregorianCalendar gc = new GregorianCalendar(year,month,day);
  gc.add(Calendar.DAY_OF_MONTH,2);
  System.out.println(gc.get(Calendar.DAY_OF_MONTH) + " " + (gc.get(Calendar.MONTH)+1) + " " + gc.get(Calendar.YEAR));
 }

}