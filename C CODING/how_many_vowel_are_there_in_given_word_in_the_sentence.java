Given a string containing multiple words, 
write a program to count how many words start with a vowel (a, e, i, o, u).

Amit is an excellent engineer


class Main {
    public static void main(String[] args) {
        String str="Amit is an excellent engineer";
        int count=0;
        
        str=str.toUpperCase();
        String[] words=str.split(" ");
        for(int i=0;i<words.length;i++)
        {
            char firstChar=words[i].charAt(0);
            if(firstChar=='A'||firstChar=='E'||firstChar=='I'||firstChar=='O'||firstChar=='U')
            {
                count++;
            }
        }
        System.out.println(count);
    }
}

class Main {
    public static void main(String[] args) {
        String str="Amit is an excellent engineer";
        int count=0;
        
        str=str.toUpperCase();
        boolean vowel=true;
       
        for(int i=0;i<str.length();i++)
        {
          char ch=str.charAt(i);
          if(ch==' ')
          {
              vowel=true;
          }
          else if(vowel)
          {
              if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
              {
                  count++;
              }
              vowel=false;
              
          }
        }
        System.out.println(count);
        
    }
}


