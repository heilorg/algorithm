import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        
        if(number < 5)System.out.println("0");
        else {
            int count = 0;
            for(;number >= 5; number -= 5){
                if(Math.floor(number / 5) * 5 % 5 == 0){
                    count += 1;
                }
                if(Math.floor(number / 5) * 5 % 25 == 0){
                    count += 1;
                }
                if(Math.floor(number / 5) * 5 % 125 == 0){
                    count += 1;
                }
            }
            
            
            System.out.println(count);
        }
    }
}