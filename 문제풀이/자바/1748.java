import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int temp = number;
        long count = 0;
        
        for(int i = 0;; i++){
            number -=  (int)Math.pow(10, i) * 9;
            count += (int)Math.pow(10, i) * 9 * (i + 1);
            if(number <= 0){
                count += number * (i + 1);
                break;
            }
        }
        
        System.out.println(count);
    }
}