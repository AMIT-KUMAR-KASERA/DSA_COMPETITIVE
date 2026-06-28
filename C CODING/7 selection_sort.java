📊 Array (8 numbers)
[8, 3, 5, 2, 7, 1, 4, 6]

👉 हम ascending (minimum select) करेंगे

🔁 Pass 1 (i = 0)

Start:
min = 8

अब एक-एक करके compare करो:

3 < 8 → yes → min = 3
5 < 3 → no
2 < 3 → yes → min = 2
7 < 2 → no
1 < 2 → yes → min = 1
4 < 1 → no
6 < 1 → no

👉 Final min = 1

  Swap (8 ↔ 1)

[1, 3, 5, 2, 7, 8, 4, 6]
🔁 Pass 2 (i = 1)

Start:
min = 3

Compare:

5 < 3 → no
2 < 3 → yes → min = 2
7 < 2 → no
8 < 2 → no
4 < 2 → no
6 < 2 → no

👉 Final min = 2

Swap (3 ↔ 2)

[1, 2, 5, 3, 7, 8, 4, 6]
🔁 Pass 3 (i = 2)

Start:
min = 5

Compare:

3 < 5 → yes → min = 3
7 < 3 → no
8 < 3 → no
4 < 3 → no
6 < 3 → no

👉 Swap (5 ↔ 3)

[1, 2, 3, 5, 7, 8, 4, 6]
🔁 Pass 4 (i = 3)

Start:
min = 5

Compare:

7 < 5 → no
8 < 5 → no
4 < 5 → yes → min = 4
6 < 4 → no

👉 Swap (5 ↔ 4)

[1, 2, 3, 4, 7, 8, 5, 6]
🔁 Pass 5 (i = 4)

Start:
min = 7

Compare:

8 < 7 → no
5 < 7 → yes → min = 5
6 < 5 → no

👉 Swap (7 ↔ 5)

[1, 2, 3, 4, 5, 8, 7, 6]
🔁 Pass 6 (i = 5)

Start:
min = 8

Compare:

7 < 8 → yes → min = 7
6 < 7 → yes → min = 6

👉 Swap (8 ↔ 6)

[1, 2, 3, 4, 5, 6, 7, 8]
🔁 Pass 7 (i = 6)

Start:
min = 7

Compare:

8 < 7 → no

👉 No swap

✅ Final Answer
[1, 2, 3, 4, 5, 6, 7, 8]



  import java.util.*;
class Main {
    public static void main(String[] args) {
      int arr[] = {8, 3, 5, 2, 7, 1, 4, 6};
        int n = arr.length;
        for(int i=0;i<n-1;i++){
            int min=i;
            for(int j=1+i;j<n;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
            }
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        System.out.println(Arrays.toString(arr));
    }
}


  import java.util.*;
class Main {
    public static void main(String[] args) {
      int arr[] = {8, 3, 5, 2, 7, 1, 4, 6};
        int n = arr.length;
        for(int i=0;i<n-1;i++){
            int min=i;
            for(int j=1+i;j<n;j++){
                if(arr[j]>arr[min]){
                   min=j;
                }
            }
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        System.out.println(Arrays.toString(arr));
    }
