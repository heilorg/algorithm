
import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int nums[] = new int[42];
        for(int i = 0; i < 42; i++)nums[i] = 0;
        
        for(int i = 0; i < 10; i++){
            nums[scan.nextInt() % 42]++;
        }
        
        int cnt = 0;
        for(int i = 0; i < 42; i++){
            if(nums[i] > 0)
                cnt ++;
        }
        
        System.out.println(cnt);
    }
}