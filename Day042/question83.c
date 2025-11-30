//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
int main() {
    char str[100];
    int i,v=0,c=0;
    printf("Enter the string :\n");
    scanf("%[^\n]", str);
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        v++;
        else 
        c++;
        i++;
    }
    printf("Consonents : %d\n",c);
    printf("Vowels : %d\n",v);
    return 0;
}