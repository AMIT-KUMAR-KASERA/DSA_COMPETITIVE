//basic logic
char ch='A' //convert it into unicode ya ascii
  if(ch==65)
{
  System.out.println("hello"):
}

or
  if(ch=='A')  //here internally both convert like(65==65)
  {
  System.out.println("hello"):
  }


💡 “force int conversion” ka matlab kya hai?

👉 Java me jab tum *char ke saath arithmetic operation (+, -, , /) karte ho,
to char automatically int me convert ho jata hai

  
// another logic, it is conversion
int ch=65;     // we know that A=65
System.out.println(char(ch));
or
  char ch='A'
  System.out.println(ch+2)       //
  
  🧠 Important Samajh
Code      	Output      	Reason
'A'         	A	         char print
'A' + 0     	65	       int me convert ho gaya
(char)65     	A	         wapas char

️ Expression:
'A' + 0

👉 Yaha + 0 ek trick hai
👉 Jaise hi + use hua → Java bolta hai:

"Oh, ye arithmetic hai → convert to int"
  3️⃣ Internally kya hota hai?
'A' → 65 65 + 0 = 65

✅ Output:
65
====================================================================================================================
🟢 Coding Question: Check Anagram Without Sorting (Character Matching)
🧾 Problem Statement

Given two strings str1 and str2, write a program to check whether they are anagrams of each other.

👉 Conditions:
The order of characters does not matter
Comparison should be case-insensitive
Do not use built-in sorting methods (like Arrays.sort())
Use manual character matching logic (nested loops)

📥 Input

Two strings:

str1 = "Listen"  
str2 = "Silent"
📤 Output
Anagram
❌ Example (Not Anagram)
Input:
str1 = "hello"
str2 = "world"

Output:
Not Anagram

import java.util.*;
class Main {
    public static void main(String[] args) {
       String str1="Listen";
       String str2="Silent";
       // 1. Lenght check
       
       if(str1.length()!=str2.length())
       {
           System.out.println("Not Aanagram");
           return;
       }
       // 2. Convert to LowerCase manually
       char[] arr1=new char[str1.length()];
       char [] arr2=new char[str2.length()];
       
       for(int i=0;i<str1.length();i++)
       {
           char c1=str1.charAt(i);
           char c2=str2.charAt(i);
           
           if(c1>='A'&&c1<='Z')
           {
               c1=(char)(c1+32);
               c2=(char)(c2+32);
           }
           if (c2 >= 'A' && c2 <= 'Z'){
           c2 =(char)(c2 + 32);
           }
           arr1[i]=c1;
           arr2[i]=c2;
       }
       //matching condition
       boolean isAnagram=false;
       for(int i=0;i<arr1.length;i++){
           for(int j=0;j<arr2.length;j++)
           {
               if(arr1[i]==arr2[j])
               {
                   isAnagram=true;
                   break;
               }
           }
       }
       if(isAnagram)
       {
           System.out.println("anagram");
       }
       else{
           System.out.println("not anagram");
       }
       
    }
}


//another way



// array to String conversions;
2️⃣ Using String.valueOf()
char[] arr = {'J', 'a', 'v', 'a'};
String str = String.valueOf(arr);

System.out.println(str);

👉 Output:

Java

✔ Ye bhi internally same kaam karta hai

3️⃣ Manual Way (Without Predefined Method)

Agar interviewer bole “no predefined method” 👇

char[] arr = {'H', 'e', 'l', 'l', 'o'};
String str = "";

for (int i = 0; i < arr.length; i++) {
    str = str + arr[i];
}

System.out.println(str);

👉 Output:

Hello


  import java.util.*;
class Main {
    public static void main(String[] args) {
       String str1="Listen";
       String str2="Silent";
       // 1. Lenght check
       str1=str1.toUpperCase();
       str2=str2.toUpperCase();
       
       if(str1.length()!=str2.length())
       {
           System.out.println("Not Aanagram");
           return;
       }
       // 2. Convert to LowerCase manually
       char[] arr1=str1.toCharArray();
       char [] arr2=str2.toCharArray();
       Arrays.sort(arr1);
       Arrays.sort(arr2);
       str1=String.valueOf(arr1);
       str2=String.valueOf(arr2);
       if(str1.equals(str2))
       {
           System.out.println("anagram");
       }
       
    }
}


  

