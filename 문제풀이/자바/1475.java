import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int nums[] = new int[10];
        for(int i = 0; i < 10; i++){
            nums[i] = 0;
        }
        
        int number = scan.nextInt();
       
        for(int length = ("" + number).length(); length > 0; length--){
            nums[number %  10]++;
            number = number / 10;
        }
       
        int cnt = 0;
        
        for(int i = 0; i < 10; i++){
            if(i != 6 && i != 9){
                cnt = Math.max(cnt, nums[i]);
            }
        }
        cnt = Math.max(cnt, (int)Math.ceil((float)(nums[6] + nums[9]) / 2));
        System.out.println(cnt);
    }
}