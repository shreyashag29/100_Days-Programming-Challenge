//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO
*/
#include<stdio.h>
int main(){
    char str[100];
    int i;
    printf("Enter a string\n");
    scanf("%[^\n]", str);
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        printf("%c",(char)(int)(str[i]+32));
        else if(str[i]>='a' && str[i]<='z')
        printf("%c",(char)(int)(str[i]-32));
        i++;
    }
    return 0;
}