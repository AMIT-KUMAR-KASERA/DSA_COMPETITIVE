/*
*
**
***
****
*****
*/
/*
1
22
333
4444
55555
*/
/*
1
12
123
1234
12345
*/
/*
a
bc
def
ghij
klmno
*/
/*

1
23
456
78910
1112131415


*/
/*
a
bb
ccc
dddd
eeeee

*/
/*
a
ab
abc
abcd
abcde

*/

#include<stdio.h>
int main()
{
    int i,j;
    printf("enter the size of matrix ");
    int num;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        char alphabat='a';
        for(j=1;j<=i;j++)
        {
            printf("%c",alphabat);
        alphabat++;
        }
    
        printf("\n");
    }

}