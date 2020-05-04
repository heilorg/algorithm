import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int dp[] = new int[number + 1];
        dp[0] = 1;
        dp[1] = 2;
        for(int i = 2; i <= number; i++){
            dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
        }
        System.out.println(dp[number - 1]);
        
    }
}
