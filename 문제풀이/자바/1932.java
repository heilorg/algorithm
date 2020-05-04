import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int num[][] = new int[501][501];
        int max = 0;
        
        num[0][0] = scan.nextInt();
        for(int i = 1; i < number; i++){
            for(int j = 0; j <= i; j++){
                if(j == 0){
                    num[i][j] = scan.nextInt() + num[i - 1][j];
                }else if(j == i){
                    num[i][j] = scan.nextInt() + num[i - 1][j - 1];
                }else{
                    num[i][j] = scan.nextInt() + Math.max(num[i - 1][j - 1], num[i - 1][j]);
                }
            }
        }
        
        for(int i = 0; i < number; i++){
            if(max < num[number - 1][i])max = num[number - 1][i];
        }
        
        System.out.println(max);
    }
    
    
}
