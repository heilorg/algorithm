import java.io.IOException;
import java.util.*;

// 1
// 1은 0으로 바뀜
// 10

// 0은 1과 0 둘다 가능
// 101
// 100

// 1010
// 1001

// 10101
// 10100
// 10010
// 10001

// 101010
// 101000
// 101001
// 100100
// 100101
// 100010
// 100001
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        long dp[][] = new long[number + 1][10];
        
        dp[0][0] = 0;
        dp[0][1] = 1;
        
        for(int i = 1; i < number; i++){
            dp[i][0] = dp[i - 1][1] + dp[i - 1][0];
            dp[i][1] = dp[i - 1][0];
        }
        
        System.out.println(dp[number - 1][0] + dp[number - 1][1]);
    }
}