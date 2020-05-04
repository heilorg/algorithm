import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        long arr[] = new long[101];
        arr[0] = 1;
        arr[1] = 1;
        arr[2] = 1;
        arr[3] = 2;
        arr[4] = 2;
        arr[5] = 3;
        int index = 6;
        for(int k = 0; k < num; k++){
            int number = scan.nextInt();
            for(;index < number; index++){
                arr[index] = arr[index - 1] + arr[index - 5];
            }
            System.out.println(arr[number - 1]);
        }
        
    }
}
