import java.io.IOException;
import java.util.*;
// dp 기초 문제 2xn타일링 백준 문제 채울겸 그냥 저냥 푼 문제

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int dp[] = new int[number + 3];
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 3;
        for(int i = 3; i <= number - 1; i++){
            dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
        }
        
        System.out.println(dp[number - 1]);
    }
}
