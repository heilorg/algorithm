import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int dp[] = new int[number + 2];
        dp[1] = 3;
        dp[2] = 7;
        
        for(int j = 3; j <= number; j++){
            dp[j] = (dp[j - 1] * 2 + dp[j - 2]) % 9901;
        }
        
        System.out.println(dp[number] % 9901);
    }
}