import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int num[] = new int[number];
        int dp[] = new int[number];
        
        for(int i = 0; i < number; i++){
            num[i] = scan.nextInt();
        }
        
        int max = 0;
        for(int i = 0; i < number; i++){
            dp[i] = num[i];
            for(int j = i - 1; j >= 0; j--){
                if(num[i] > num[j]){
                    dp[i] = Math.max(dp[i], num[i] + dp[j]);
                }        
            }
            max = Math.max(dp[i], max);
        }
        
        System.out.println(max);
    }
}