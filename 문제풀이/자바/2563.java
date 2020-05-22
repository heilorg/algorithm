import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        boolean map[][] = new boolean[100][100];
        for(int i = 0; i < 100; i++)for(int j = 0; j < 100; j++)map[i][j] = false;
        int cnt = 0;
        
        int number = scan.nextInt();
        for(int c = 0; c < number; c++){
            int x = scan.nextInt();
            int y = scan.nextInt();
            
            for(int i = x; i < x + 10; i++){
                for(int j = y; j < y + 10; j++){
                    if(!map[i][j]){
                       map[i][j] = true;
                       cnt++;
                    }
                }
            }
            
        }
        
        System.out.println(cnt);
    }
}