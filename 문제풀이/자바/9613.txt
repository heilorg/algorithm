import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        
        for(int i = 0; i < number; i++){
            int num = scan.nextInt();
            int nums[] = new int[num];
            for(int j = 0; j < num; j++){
                nums[j] = scan.nextInt();
            }
            
            long sum = 0;
            for(int a = 0; a < num; a++){
                for(int b = a; b < num; b++){
                    if(a == b){
                        continue;
                    }
                    
                    int n1 = nums[a], n2 = nums[b];
                    while(n1 % n2 != 0){
                        int temp = n1 % n2;
                        n1 = n2;
                        n2 = temp;
                    }
                    sum += n2;
                }
            }
            System.out.println(sum);
        }
    }
}