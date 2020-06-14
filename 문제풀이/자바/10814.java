import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException  {
        Scanner scan = new Scanner(System.in);
        
        ArrayList <Item> al = new ArrayList<>();
        
        int number = scan.nextInt();
        
        for(int i = 0; i < number; i++){
            int itemNumber = scan.nextInt();
            String itemName = scan.next();
            al.add(new Item(itemNumber, itemName));
        }
        
        Collections.sort(al, (a, b) -> a.num - b.num);
        
        for(int i = 0; i < number; i++){
            System.out.println(al.get(i).num + " " + al.get(i).name);
        }
    }
}
    
class Item{
    public int num;
    public String name;
    
    public Item(int num, String name){
        this.num = num;
        this.name = name;
    }
}