import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        
        boolean prime[] = new boolean[10001];
        for(int i = 1; i <= 10000; i++){
            prime[i] = true;
        }
        prime[1] = false;
        for(int num = 2; num <= 10000; num++){
            if(prime[num]){
                for(int i = num * 2; i <= 10000; i = i + num){
                    prime[i] = false;
                }
            }
        }
        
        int num = scan.nextInt();
        
        for(int i = 0; i < num; i++){
            int number = scan.nextInt();
            for(int j = number / 2; j >= 2; j--){
                if(prime[j]){
                    if(prime[number - j]){
                        System.out.println(j + " " + (number - j));
                        break;
                    }
                }
            }
        }
    }
}