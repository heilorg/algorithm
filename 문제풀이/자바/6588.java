import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        boolean test[] = new boolean[1000001];
        for(int j = 0; j < 1000001; j++)test[j] = true;
        test[0] = false;
        test[1] = false;
        int num = scan.nextInt(), i = 2;
        while(num != 0){
            for(;i <= num; i++){
                if(test[i])
                    for(int j = i * 2; j < 1000001; j = j + i)test[j] = false;
            }
            
            int j;
            for(j = 3; j < num; j++){
                if(test[j] && test[num - j])break; 
            }
            if(j == num){
                System.out.println("Goldbach's conjecture is wrong.");
            }else{
                System.out.println(num + " = " + j + " + " + (num - j));
            }
            
            num = scan.nextInt();
        }
    }
}