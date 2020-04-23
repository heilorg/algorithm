import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        for(int i = 0; i < num; i++){
            int number = scan.nextInt();
            if(number == 0){
                System.out.println("1 0");
                continue;
            }
            long dp1[] = new long[number + 1];
            long dp2[] = new long[number + 1];
            dp1[0] = 1;
            dp1[1] = 0;
            dp2[0] = 0;
            dp2[1] = 1;
            for(int j = 2; j <= number; j++){
                dp1[j] = dp1[j - 1] + dp1[j - 2];
                dp2[j] = dp2[j - 1] + dp2[j - 2];
            }
            System.out.println(dp1[number] + " " + dp2[number]);
        }
        
        
    }
}
