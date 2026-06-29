4. Write a program to remove the duplicate 
characters from the given String? 
 Ex: banaans   Output: bans 

  import java.util.*;
class Main {
    public static void main(String [] arg) {
        String result="";
        String str="banaans";
        
       for(int i=0;i<str.length();i++)
       {
           int count=0;
           if(str.charAt(i)!=' ')
           {
               for(int j=i+1;j<str.length();j++)
               {
                   if(str.charAt(i)==str.charAt(j))
                   {
                      count++;
                   }
               }
           }
           if(count==0)
           {
               result+=str.charAt(i);
        
           }
       }
     System.out.println(result);
       
    }
}
