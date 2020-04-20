import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
    
        double PI = 3.14159265358979323846264338327950288419;
        
        System.out.println(String.format("%.6f", number * number * PI));
        System.out.println(String.format("%.6f", number * number * (double)2));
    }
}