Example
Input
Array: 1 2 3 4 5
Rotation (r): 2
Output
3 4 5 1 2

Explanation:

Original:
1 2 3 4 5

After 1 left rotation:
2 3 4 5 1

After 2 left rotations:
3 4 5 1 2





  import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter array size: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter " + n + " elements:");

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter number of rotations: ");
        int r = sc.nextInt();

        r = r % n;

        while (r != 0) {

            int temp = arr[0];

            for (int i = 0; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }

            arr[n - 1] = temp;

            r--;
        }

        System.out.println("Array after rotation:");

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
