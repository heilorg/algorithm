import java.io.IOException;
import java.util.*;

import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        System.out.println((int)Math.pow(2, num) - 1);
        hanoi(num, 3, 1);
    }
    
    public static void hanoi(int block, int move, int place){ // block : 옮길 블록 // move : 옮길 위치 // place: 현재 위치
        if(block == 1){
            addLog(place, move);
        }else{
            hanoi(block - 1, getOther(move, place), place);    //나머지
            addLog(place, move);
            hanoi(block - 1, move, getOther(move, place));
        }
    }
    
    public static int getOther(int a, int b){
        return 6 - a - b;
    }
    
    public static void addLog(int place, int move){
        StringBuilder builder = new StringBuilder();
        builder.append(place);
        builder.append(" ");
        builder.append(move);
        System.out.println(new String(builder));
    }
}
