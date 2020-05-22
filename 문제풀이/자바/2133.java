import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int data[] = new int[number + 1];
        int dp[] = new int[number + 1];
        
        data[0] = 3;
        data[1] = 11;
        dp[0] = 2;
        dp[1] = 8;
        if(number % 2 == 1){
            System.out.println(0);
        }else{
            for(int i = 2; i <= number / 2 - 1; i++){
            data[i] = data[i - 1] * 3 + dp[i - 1];
            dp[i] = data[i - 1] * 2 + dp[i - 1];
        }
            System.out.println(data[number / 2 - 1]);    
        }
        
    }
}