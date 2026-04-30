5. Write a program to count the number of 
occurrences of each character in a string? 
 Ex: apple    
Output: a-1 p-2 l-1 e-1


class Main {
    public static void main(String[] args) {

        String str = args[0];

        str = str.toLowerCase(); // 👈 important line

        int[] count = new int[256];

        for (int i = 0; i < str.length(); i++) {
            count[str.charAt(i)]++;
        }

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (count[ch] != 0 && ch != ' ') { // ignore space
                System.out.print(ch + "-" + count[ch] + " ");
                count[ch] = 0;
            }
        }
    }
}
