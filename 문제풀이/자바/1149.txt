import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int price[][] = new int[number][3];
        
        for(int i = 0; i < number; i++){
            price[i][0] = scan.nextInt();
            price[i][1] = scan.nextInt();
            price[i][2] = scan.nextInt();
            if(i >= 1){
                price[i][0] += Math.min(price[i - 1][1], price[i - 1][2]);
                price[i][1] += Math.min(price[i - 1][0], price[i - 1][2]);
                price[i][2] += Math.min(price[i - 1][0], price[i - 1][1]);
            }
        }
        
        System.out.println(Math.min(Math.min(price[number - 1][0], price[number - 1][1]), price[number - 1][2]));
    }
    
    
}
