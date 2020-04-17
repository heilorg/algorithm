import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int length;
        length = scan.nextInt();
        int [][] map = new int[10][101];
        map[0][0] = 0;
        for(int i = 1; i < 10; i++){
            map[i][0] = 1;
        }
        
        for(int i = 1; i < length; i++){
            for(int j = 0; j < 10; j++){
                if(j == 0){
                    map[j][i] = map[j + 1][i - 1];
                }else if(j == 9){
                    map[j][i] = map[j - 1][i - 1];
                }else{
                    map[j][i] = (map[j - 1][i - 1] + map[j + 1][i - 1]) % 1000000000;
                }
            }    
        }
        int count = 0;
        for(int i = 0; i < 10; i++){
            count = (count + map[i][length - 1]) % 1000000000;
        }
        System.out.println(count % 1000000000);
    }
}
