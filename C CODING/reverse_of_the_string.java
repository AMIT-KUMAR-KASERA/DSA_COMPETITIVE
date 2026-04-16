import java.util.Scanner; 
public class Reverse { 
 
 public static void main(String[] args) { 
   
  Scanner sc = new Scanner(System.in); 
  System.out.println("Enter String to reverse: "); 
   
  String str = sc.nextLine(); 
  for(int i=str.length()-1;i>=0;i--) { 
   System.out.print(str.charAt(i)); 
  } 
  sc.close(); 
   
 } 
 
}


Enter String to reverse:  
Nacre 
ercaN 

import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter string to reverse:");
        String str=sc.nextLine();
        StringBuilder sb=new StringBuilder();
        sb.append(str);
        sb.reverse();
        System.out.println(sb);
        
    }
}
