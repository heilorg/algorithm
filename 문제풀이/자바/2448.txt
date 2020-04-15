import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number;
        number = scan.nextInt();
        int temp = number;
        
        StringBuilder blankBuilder = new StringBuilder();
        for(int j = 0; j < temp; j++){
           blankBuilder.append(" ");
        }
        String blank = new String(blankBuilder);
        
        String printLine[] = new String[number + 1];
        
        printLine[0] = "*";
        printLine[1] = "* *";
        printLine[2] = "*****";
        
        
        number = number / 3;
        int count = 1, line = 3, bottom = 5;
        while(number != 1){
            for(int i = 0; i < count * 3; i++){
                printLine[line] = printLine[line - count * 3] 
                                + blank.substring(0, bottom - i * 2) 
                                + printLine[line - count * 3];
                line += 1;
            }
            
            bottom = bottom * 2 + 1;
            count = count * 2;
            number = number / 2;
        }
        
        for(int i = 0; i < temp; i++){
            System.out.println(
                blank.substring(0, temp - i - 1) 
                + printLine[i] 
                + blank.substring(0, temp - i - 1)
            );
        }
    }
}