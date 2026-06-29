📊 Example Array
[5, 3, 2, 4, 1]
🔁 Pass 1 (sab compare hoga)
5 > 3 → swap → [3,5,2,4,1]
5 > 2 → swap → [3,2,5,4,1]
5 > 4 → swap → [3,2,4,5,1]
5 > 1 → swap → [3,2,4,1,5]

🔁 Pass 2
3 > 2 → swap → [2,3,4,1,5]
3 < 4 → no swap
4 > 1 → swap → [2,3,1,4,5]

👉 4 second last me fix

🔁 Pass 3
2 < 3 → no swap
3 > 1 → swap → [2,1,3,4,5]
🔁 Pass 4
2 > 1 → swap → [1,2,3,4,5]
  
✅ Final Output
[1, 2, 3, 4, 5]


  import java.util.*;
class Main {
    public static void main(String[] args) {
       int arr[]={5,3,2,4,1};
       
       for(int i=0;i<arr.length;i++)
       {
           for(int j=0;j<arr.length-i-1;j++)
           {
               if(arr[j]>arr[j+1])
               {
                   int temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
               }
           }
       }
       System.out.println(Arrays.toString(arr));
    }
}
