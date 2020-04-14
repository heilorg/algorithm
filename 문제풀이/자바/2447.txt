import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number;
        number = scan.nextInt();
        
        for(int i = 1; i <= number; i++){
            String printLine = "";
            for(int j = 1; j <= number; j++){
                int x = i, y = j;
                int temp = number;
                boolean flag = false;
                while(temp != 1){
                    if(x % 3 == 2 && y % 3 == 2){
                        flag = true;
                    }
                    x = (int)Math.ceil((double)x / 3);
                    y = (int)Math.ceil((double)y / 3);
                    temp = temp / 3;
                }
                if(flag){
                    printLine = printLine + " ";
                }else{
                    printLine = printLine + "*"; // 하나씩 출력하면 시간 초과이므로 문자열로 통합하여 출력하기
                }
            }
            System.out.print(printLine + "\n");
        }
    }
}