import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        System.out.println(fac(num));
    }
    
    public static int fac(int number){
        if(number == 0)return 1;
        if(number == 1)return 1;
        return fac(number - 1) * number; 
    }
}