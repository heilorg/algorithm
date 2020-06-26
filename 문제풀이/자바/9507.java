import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        long []dp = new long[70];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        int start = 4;
        for(int i = 0; i < number; i++){
            int num = scan.nextInt();
            for(int j = start; j <= num; j++){
                dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3] + dp[j - 4];
                start++;
            }
            System.out.println(dp[num]);
        }
    }
}
