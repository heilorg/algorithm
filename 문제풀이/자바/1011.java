import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        for(int i = 0; i < num; i++){
            int x = scan.nextInt();
            int y = scan.nextInt();
            int length = y - x;
            
            int result = 1;
            int count = 1;
            for(int j = 0;; j++){
                if(length <= count){
                    System.out.println(result);
                    break;
                }
                length -= count;
                if(j % 2 == 1){
                    count += 1;
                }
                result += 1;
            }
        }
        
    }
}