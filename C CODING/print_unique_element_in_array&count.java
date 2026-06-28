"Print the unique elements in an array and count the total number of unique elements."
What is a Unique Element?

A unique element is an element that appears exactly one time in the array.

Example:
Input:
1 2 3 2 4 1 5

Frequency:
1 → 2 times
2 → 2 times
3 → 1 time ✓
4 → 1 time ✓
5 → 1 time ✓

Output:

Unique elements: 3 4 5
Total unique elements: 3

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

        int count = 0;

        System.out.print("Unique elements: ");

        for (int i = 0; i < n; i++) {

            int c = 0;

            for (int j = 0; j < n; j++) {

                if (arr[i] == arr[j]) {
                    c++;
                }
            }

            if (c == 1) {
                count++;
                System.out.print(arr[i] + " ");
            }
        }

        System.out.println("\nTotal unique elements: " + count);
    }
}








================================================================================================
Print Duplicate Elements and Count the Number of Duplicates
Example
Input:
1 2 3 2 4 1 5

Output:
1 2
Total duplicate elements: 2

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

        int count = 0;

        System.out.print("Duplicate elements: ");

        for (int i = 0; i < n; i++) {

            int c = 1;

            for (int j = i + 1; j < n; j++) {

                if (arr[i] == arr[j]) {
                    c++;
                }
            }

            if (c == 2) {
                count++;
                System.out.print(arr[i] + " ");
            }
        }

        System.out.println("\nTotal duplicate elements: " + count);
    }
}
