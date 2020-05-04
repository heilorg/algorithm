import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int start = scan.nextInt();
        int end = scan.nextInt();
        
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
        
        for(int num = start; num <= end; num++){
            if(prime[num])System.out.println(num);
        }
    }
}