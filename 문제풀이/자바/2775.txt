import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        int [][]people = new int[15][15];
        for(int i = 0; i < 15; i++)
            for(int j = 0; j < 15; j++)people[i][j] = 0;
        for(int i = 0; i < 15; i++)people[0][i] = i;
        
        for(int i = 0; i < 14; i++){
            for(int j = 0; j < 15; j++){
                for(int k = 0; k <= j; k++){
                    people[i + 1][j] += people[i][k];
                }    
            }
        }
            
        
        for(int i = 0; i < num; i++){
            int floor = scan.nextInt();
            int row = scan.nextInt();
            
            System.out.println(people[floor][row]);
        }
        
    }
}