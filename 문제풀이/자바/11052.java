import java.io.IOException;
import java.util.*;
// 카드구매하기 문제 문제가 장문이면 읽기 귀찮고 이상한 문장도 많아서 풀기 귀찮음
// 해당 수마다 최선의 수를 구하려고 하고 안되는 경우는 컷하는게 dp인건 이해하는데 최선의 수를 찾는게 어려웠다


public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        long dp[] = new long[number + 1];
        
        dp[1] = scan.nextInt();
        for(int i = 2; i <= number; i++){
            dp[i] = scan.nextInt();
            
            for(int j = i - 1; j >= i / 2; j--){
                dp[i] = Math.max(dp[i], dp[j] + dp[i - j]);
            }
        }
        
        System.out.println(dp[number]);
    }
}