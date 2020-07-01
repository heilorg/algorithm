import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num[] = new int[3];
        num[0] = scan.nextInt() + scan.nextInt() + scan.nextInt() + scan.nextInt();
        num[1] = scan.nextInt() + scan.nextInt() + scan.nextInt() + scan.nextInt();
        num[2] = scan.nextInt() + scan.nextInt() + scan.nextInt() + scan.nextInt();
        
        String print[] = new String[5];
        print[0] = "D";
        print[1] = "C";
        print[2] = "B";
        print[3] = "A";
        print[4] = "E";
        
        for(int i = 0; i < 3; i++){
            System.out.println(print[num[i]]);
        }
    }
}