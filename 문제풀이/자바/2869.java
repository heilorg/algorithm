import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int day = scan.nextInt();
        int night = scan.nextInt();
        int height = scan.nextInt();
        
        System.out.println((int)Math.ceil((double)(height - day) / (double)(day - night)) + 1);
    }
}