import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        
        int num = scan.nextInt();
        for(int j = 0; j < num; j++){
            int vps = 0;
            String ps = scan.next();
            boolean flag = true;
            
            int length = ps.length();
            for(int i = 0; i < length; i++){
                if(ps.substring(i, i + 1).equals("(")){
                    vps++;
                }else{
                    vps--;
                }
                
                if(vps < 0){
                    flag = false;
                }
            }
            if(vps > 0){
                flag = false;
            }
            
            if(flag){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}