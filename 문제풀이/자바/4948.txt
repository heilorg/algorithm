import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        
        for(;;){
            int num = scan.nextInt();
            if(num == 0)break;
            
            System.out.println(prime(num, num * 2));
        }
    }
    
    public static int prime(int start, int end){
        boolean prime[] = new boolean[end + 1];
        for(int i = 1; i <= end; i++){
            prime[i] = true;
        }
        prime[1] = false;
        for(int num = 2; num <= end; num++){
            if(prime[num]){
                for(int i = num * 2; i <= end; i = i + num){
                    prime[i] = false;
                }
            }
        }
        int count = 0;
        for(int i = start + 1; i <= end; i++){
            if(prime[i])count += 1;
        }
        return count;
    }
}