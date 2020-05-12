import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        long min = scan.nextLong();
        long max = scan.nextLong();
        
        int length = (int)(max - min) + 1;
        
        boolean num[] = new boolean[length];
        for(int i = 0; i < length; i++)num[i] = true;
        
        for(long i = 2; i*i <= max; i++){
            long power = i * i;
            long start = min % power == 0 ? min / power : (min / power) + 1;
            for(long j = start; j * power <= max; j++){
                int index = (int)(j * power - min);
                num[index] = false;
            }
        }
        
        long cnt = 0;
        for(int i = 0; i < length; i++)if(num[i])cnt++;
        
        System.out.println(cnt);
    }
}