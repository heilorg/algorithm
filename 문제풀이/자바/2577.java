import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int nums[] = new int[10];
        for(int i = 0; i < 10; i++){
            nums[i] = 0;
        }
        
        int num1 = scan.nextInt();
        int num2 = scan.nextInt();
        int num3 = scan.nextInt();
       
        int number = num1 * num2 * num3;
       
        for(int length = ("" + number).length(); length > 0; length--){
            nums[number %  10]++;
            number = number / 10;
        }
       
        for(int i = 0; i < 10; i++){
            System.out.println(nums[i]);
        }
       
    }
}