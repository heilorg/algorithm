import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
        int cnt = 0;
        
        boolean arr[] = new boolean[n+1];
        for(int i = 1; i <= n; i++){
            arr[i] = true;
        }
        arr[1] = false;
        
        for(int i = 2; i <= n; i++){
            if(arr[i]){   
                for(int j = i; j <= n;){
                    if(arr[j]){ 
                        arr[j] = false;
                        cnt++;
                        if(k == cnt)System.out.println(j);    
                    }
                    j = j + i;
                }
            }
        }
    }
}
