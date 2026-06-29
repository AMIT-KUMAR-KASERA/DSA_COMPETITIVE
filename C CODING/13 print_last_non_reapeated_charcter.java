class Main {
    public static void main(String[] args) {
        String str="Software services";
       String result="";
       for(int i=str.length()-1;i>0;i--)
       {
           int count=1;
           if(str.charAt(i)!=' '){
           for(int j=i-1;j>0;j--)
           {
               if(str.charAt(i)==str.charAt(j)){
                   count++;
                   break;
               }
           }
           if(count==1){
               result+=str.charAt(i);
               System.out.println(result);
               break;
           }
           }
       }
    }
}
