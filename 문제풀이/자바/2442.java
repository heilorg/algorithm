import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number;
        number = scan.nextInt();
        
        for(int i = number; i > 0; i--){    
            for(int j = 0; j < i - 1; j++){
                System.out.print(" ");
            }
            for(int j = 0; j < (number - i) * 2 + 1; j++){
                System.out.print("*");
            }
            System.out.print("\n");
        }
    }
}
