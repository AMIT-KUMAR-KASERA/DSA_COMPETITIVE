0,1,1,2,3,5,8,13...................
import java.util.*;
class Main {
    public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of the array");
        int size=sc.nextInt();
       long num1=0;
       long num2=1;
       
       System.out.print(num1+","+num2+",");
       for(int i=2;i<size;i++)
       {
           long temp=0;
            
           temp=num1+num2;
           System.out.print(temp+",");
           num1=num2;
           num2=temp;
          
       }
       
    }
}
