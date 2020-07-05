import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        
        int cnt = 0;
        for(int i =0 ; i < number; i++){
            cnt += scan.nextInt();
        } 
        
        if(Math.floor(number / 2) < cnt){
            System.out.println("Junhee is cute!");
        }else{
            System.out.println("Junhee is not cute!");
        }
    }
}