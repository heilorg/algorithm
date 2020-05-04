import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number;
        number = scan.nextInt();
        int arr[] = new int[number + 1];
        arr[1] = 0;
        
        for(int i = 2; i <= number; i++){
            if(i % 6 == 0){
                arr[i] = Math.min(Math.min(arr[i / 3], arr[i / 2]), arr[i - 1]) + 1;
            }else if(i % 2 == 0){
                arr[i] = Math.min(arr[i / 2], arr[i - 1]) + 1;
            }else if(i % 3 == 0){
                arr[i] = Math.min(arr[i / 3], arr[i - 1]) + 1;
            }else{
                arr[i] = arr[i - 1] + 1;
            }
        }
        
        System.out.println(arr[number]);
    }
}
