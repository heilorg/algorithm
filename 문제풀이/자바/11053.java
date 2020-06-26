import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int dp[] = new int[number];
        int a[] = new int[number];
        int realMax = 1;
        dp[0] = 1;
        a[0] = scan.nextInt();
        for(int i = 1; i < number; i++){
            a[i] = scan.nextInt();
            int max = 0;
            for(int j = 0; j < i; j++){
                if(a[i] > a[j]){
                    if(max < dp[j])
                        max = dp[j];
                }
            }
            dp[i] = max + 1;
            if(realMax < max + 1)realMax = max + 1;
        }
        System.out.println(realMax);
    }
}
