import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        
        for(int i = 0; i < number; i++){
            int num = scan.nextInt();
            int max = num;
            
            if(num == 1){
                System.out.println(num);
                continue;
            }
            for(;;){
                if(num % 2 == 0){
                    num = num / 2;
                }else{
                    num = num * 3 + 1;
                }
                if(max < num)max = num;
                if(num == 1){
                    System.out.println(max);  
                    break;
                }
            }
        }
    }
}
