import java.io.IOException;
import java.util.*;
public class Main {
    
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int num[] = new int[301];
        int dp[] = new int[301];
        for(int i = 0; i < number; i++){
            num[i] = scan.nextInt();
        }
        
        dp[0] = num[0];
        dp[1] = num[0] + num[1];
        dp[2] = Math.max(num[0], num[1]) + num[2];
        
        for(int i = 3; i < number; i++){
            dp[i] = Math.max(dp[i - 2], num[i - 1] + dp[i - 3]) + num[i];
        }
        
        System.out.println(dp[number - 1]);
    }
}
