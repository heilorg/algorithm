import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        if(num == 1){
            System.out.println("*");
            return;
        }
        
        String []print = new String[2];
        StringBuilder builder1 = new StringBuilder();
        StringBuilder builder2 = new StringBuilder();
        for(int i = 0; i < num; i++){
            if(i % 2 == 0){
                builder1.append("*");
                builder2.append(" ");
            }else {
                builder1.append(" ");
                builder2.append("*");
            }
        }
        print[0] = new String(builder1);
        print[1] = new String(builder2);
        
        for(int i = 0; i < num * 2; i++){
            System.out.println(print[i % 2]);
        }
    }
}