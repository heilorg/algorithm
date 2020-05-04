import java.io.IOException;
import java.util.*;
// 2xn타일링 비슷한 문제라 풀어보는데 생각보다 쉬웠다

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int dp[] = new int[number + 3];
        dp[0] = 1;
        dp[1] = 3;
        dp[2] = 5;
        for(int i = 3; i <= number - 1; i++){
            dp[i] = (dp[i - 1] * 2 + (i % 2 == 0 ? -1 : 1)) % 10007;
        }
        
        System.out.println(dp[number - 1]);
    }
}
