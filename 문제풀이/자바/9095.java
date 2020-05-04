import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        for(int i = 0; i < num; i++){
            int number = scan.nextInt();
            int dp[] = new int[number + 4];
            dp[1] = 1;
            dp[2] = 2;
            dp[3] = 4;
            
            for(int j = 4; j <= number; j++){
                dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
            }
            
            System.out.println(dp[number]);
        }
    }
}