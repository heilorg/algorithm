import java.io.IOException;
import java.util.*;
// 그냥 1,2,3문제랑 뭐가 다른지 봤는데 수 범위 차이여서 나머지 연산자를 썼지만 long자료형을 썼어야 했음

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        for(int i = 0; i < num; i++){
            int number = scan.nextInt();
            long dp[] = new long[number + 4];
            dp[1] = 1;
            dp[2] = 2;
            dp[3] = 4;
            
            for(int j = 4; j <= number; j++){
                dp[j] = (dp[j - 1] + dp[j - 2] + dp[j - 3]) % 1000000009;
            }
            
            System.out.println((dp[number] % 1000000009));
        }
    }
}