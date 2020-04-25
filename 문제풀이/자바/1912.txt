import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int num[] = new int[number];
        int sum = -1001, best = -1001;
        for(int i = 0; i < number; i++){
            num[i] = scan.nextInt();
            sum = Math.max(num[i], sum + num[i]);
            best = Math.max(best, sum);
        }
        System.out.println(best);
    }
}