import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        
        int position[][] = new int[3][2];
        
        for(int i = 0; i < 3; i++){
            position[i][0] = scan.nextInt();
            position[i][1] = scan.nextInt();    
        }
        
        int printX, printY;
        if(position[0][0] == position[1][0]){
            printX = position[2][0];
        }else if(position[0][0] == position[2][0]){
            printX = position[1][0];
        }else{
            printX = position[0][0];
        }
        if(position[0][1] == position[1][1]){
            printY = position[2][1];
        }else if(position[0][1] == position[2][1]){
            printY = position[1][1];
        }else{
            printY = position[0][1];
        }
        
        System.out.println(printX + " " + printY);
    }
}