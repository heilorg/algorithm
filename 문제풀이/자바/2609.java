import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int n1 = scan.nextInt(), n2 = scan.nextInt();
        long multiple = n1 * n2;
        
        while(n1 % n2 != 0){
            int temp = n1 % n2;
            n1 = n2;
            n2 = temp;
        }
        System.out.println(n2);
        System.out.println(multiple / n2);
    }
}