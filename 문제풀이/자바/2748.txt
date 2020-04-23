import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        long dp1 = 0;
        long dp2 = 1;
        long dp3 = 1;
        for(int i = 2; i <= number; i++){
            dp3 = dp1 + dp2;
            dp1 = dp2;
            dp2 = dp3;
        }
        System.out.println(dp3);
    }
}
