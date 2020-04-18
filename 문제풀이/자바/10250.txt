import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        for(int i = 0; i < num; i++){
            int height = scan.nextInt();
            int width = scan.nextInt();
            int person = scan.nextInt();
            
            int row = (int)Math.ceil((double)person / (double)height);
            int floor = person % height;
            if(floor == 0)floor = height;
            if(row < 10){
                System.out.println(floor + "0" + row);
            }else{
                System.out.println(floor + "" + row);
            }
        }
        
    }
}