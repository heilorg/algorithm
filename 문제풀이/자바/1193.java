import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        int count = 0;
        for(int i = 1;; i++){
            if(num <= i){
                if(count % 2 == 0){
                    System.out.println((i + 1 - num) + "/" + (num));
                }else{    
                    System.out.println((num) + "/" + (i + 1 - num));
                }
                break;
            }else{
                num -= i;
                count += 1;
            }
        }
    }
}