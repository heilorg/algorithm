import java.io.IOException;
import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        
        for(int i = 0; i < num; i++){
            int x1 = scan.nextInt();
            int y1 = scan.nextInt();
            int r1 = scan.nextInt();
            int x2 = scan.nextInt();
            int y2 = scan.nextInt();
            int r2 = scan.nextInt();
            
            
            double d = Math.sqrt(Math.pow((x1 - x2), 2) + Math.pow((y1 - y2), 2)); // 두점의 거리
            
            
            if(x1 == x2 && y1 == y2){ // 중점이 같을 때
                if(r1 == r2){ // 거리가 같을 때
                    System.out.println("-1");
                }else{
                    System.out.println("0");
                }
                continue;
            }else if(d == r1 + r2){ //외접
                System.out.println("1");
            }
            else if(Math.abs(r1 - r2) == d){ // 내접
                System.out.println("1");
            }
            else if(d < r1 + r2 && Math.abs(r1 - r2) < d){
                System.out.println("2");
            }else{
                System.out.println("0");
            }
        }
    }
}
