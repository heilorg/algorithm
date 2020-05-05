import java.io.IOException;
import java.util.*;

// dp 감이 잡힌 문제 다른 사람 풀이 안보고 푼 문제

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int dp[][] = new int[number + 2][10];
        
        for(int i = 0; i < 10; i++){
            dp[0][i] = 1;
        }
        
        for(int i = 1; i < number; i++){
            dp[i][0] = dp[i - 1][0];
            for(int j = 1; j < 10; j++){
                int su = 0;
                for(int k = 0; k <= j; k++){
                    su = (su + dp[i - 1][k]) % 10007;
                }
                dp[i][j] = su;
            }
        }
        
        int sum = 0;
        for(int i = 0; i < 10; i++){
            sum = (sum + dp[number - 1][i]) % 10007;
        }
        
        System.out.println(sum % 10007);
    }
}