import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        System.out.println(fivo(num));
    }
    
    public static int fivo(int number){
        if(number == 0)return 0;
        if(number == 1)return 1;
        if(number == 2)return 1;
        return fivo(number - 1) + fivo(number - 2);
    }
}