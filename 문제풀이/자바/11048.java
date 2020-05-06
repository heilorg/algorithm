import java.io.IOException;
import java.util.*;

// 2차원 dp 기초

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int height = scan.nextInt();
        int width = scan.nextInt();
        int num[][] = new int[height][width];
        int dp[][] = new int[height][width];
        
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                num[i][j] = scan.nextInt();
            }
        }
        
        for(int i = 1; i < height; i++)
            num[i][0] = num[i][0] + num[i - 1][0];
        for(int i = 1; i < width; i++)
            num[0][i] = num[0][i] + num[0][i - 1];
        
        for(int i = 1; i < height; i++){
            for(int j = 1; j < width; j++){
                num[i][j] = Math.max(
                        Math.max(
                            num[i - 1][j],
                            num[i][j - 1]
                            ),
                            num[i - 1][j - 1]
                    ) + num[i][j];
            }
            
        }
        
        System.out.println(num[height - 1][width - 1]);
            
    }
}