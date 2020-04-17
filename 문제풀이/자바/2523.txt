import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        
        int num = scan.nextInt();
        
        StringBuilder build = new StringBuilder();
        for(int j = 0; j < num; j++)build.append("*");
        String print = new String(build);
        
        for(int i = 1; i <= num; i++){
            System.out.println(print.substring(0, i));
        }
        for(int i = num - 1; i >= 0; i--){
            System.out.println(print.substring(0, i));
        }
    }
}