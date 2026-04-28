📊 Example Array
[1, 2, 3, 4, 5]
🔁 1. Right Rotation (k = 2)

👉 Last ke elements aage aa jaate hain

Step 1 → [5, 1, 2, 3, 4]
Step 2 → [4, 5, 1, 2, 3]

✅ Final:

[4, 5, 1, 2, 3]
🔁 2. Left Rotation (k = 2)

👉 First ke elements last me chale jaate hain

Step 1 → [2, 3, 4, 5, 1]
Step 2 → [3, 4, 5, 1, 2]

✅ Final:

[3, 4, 5, 1, 2]


import java.util.*;
class Main {
    public static void main(String[] args) {
      int arr[]={1, 2, 3, 4, 5};
        int n = arr.length;
        int k=2;
        for(int i=0;i<k;i++){
            
            int last=arr[n-1];
            
           for(int j=n-1;j>=1;j--)
           {
               arr[j]=arr[j-1];
           }
           arr[0]=last;
        }
        System.out.println(Arrays.toString(arr));
    }
}



import java.util.*;
class Main {
    public static void main(String[] args) {
      int arr[]={1, 2, 3, 4, 5};
        int n = arr.length;
        int k=2;
        for(int i=0;i<k;i++){
            
            int first=arr[i];
            
           for(int j=0;j<n-1;j++)
           {
               arr[j]=arr[j+1];
           }
           arr[n-1]=first;
        }
        System.out.println(Arrays.toString(arr));
    }
}








