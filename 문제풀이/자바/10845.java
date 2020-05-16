import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int number = scan.nextInt();
        int queue[] = new int[10000];
        
        int sp = 0;
        int ep = 0;
        
        
        for(int i = 0; i <= number; i++){
            String command = scan.nextLine();
            String split_command[] = command.split(" ");
            // System.out.println(split_command[0]);    
            if(split_command[0].equals("push")){
                queue[ep] = Integer.parseInt(split_command[1]);
                ep++;
            }else
            if(split_command[0].equals("pop")){
                if(sp == ep){
                    System.out.println(-1);
                }
                else {
                    System.out.println(queue[sp]);
                    sp++;
                }
            }else
            if(split_command[0].equals("size")){
                System.out.println(ep - sp);
            }else
            if(split_command[0].equals("empty")){
                if(sp == ep)System.out.println(1);
                else System.out.println(0);
            }else
            if(split_command[0].equals("front")){
                if(sp == ep)System.out.println(-1);
                else System.out.println(queue[sp]);
            }else
            if(split_command[0].equals("back")){
                if(sp == ep)System.out.println(-1);
                else System.out.println(queue[ep - 1]);
            }
        }
    }
}