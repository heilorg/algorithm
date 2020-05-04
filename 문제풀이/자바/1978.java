import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        int count = num;
        for(int i = 0; i < num; i++){
            int number = scan.nextInt();
            boolean flag = false;
            if(number == 1)flag = true;
            for(int j = 2; j <= number / 2; j++){
                if(number % j == 0)flag = true;
            }
            if(flag){
                count -= 1;
            }
        }
        System.out.println(count);
    }
}