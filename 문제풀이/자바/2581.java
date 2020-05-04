import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int start = scan.nextInt();
        int end = scan.nextInt();
        int sum = 0;
        int firstNumber = -1;
        
        for(int num = start; num <= end; num++){
            boolean flag = true;
            if(num == 1)flag = false;
            for(int i = 2; i <= num / 2; i++){
                if(num % i == 0)flag = false;
            }
            if(flag){
                if(firstNumber == -1){
                    firstNumber = num;    
                }
                sum += num;
            }
        }
        
        if(firstNumber == -1){
            System.out.println(-1);
        }else{
            System.out.println(sum);
            System.out.println(firstNumber);
        }
    }
}