 Write a program to print First non-repeated 
character from given String? 
 Ex: Software Services  Output: o 


class Main {
    public static void main(String[] args) {
       String str="Software Services";
       String result="";
       for(int i=0;i<str.length();i++)
       {
           int count=0;
           if(str.charAt(i)!=' '){
           for(int j=i+1;j<str.length();j++)
           {
               if(str.charAt(i)==str.charAt(j)){
                   count++;
                   break;
               }
           }
           if(count==0){
               result+=str.charAt(i);
               System.out.println(result);
               break;
           }
           }
       }
    }
}
