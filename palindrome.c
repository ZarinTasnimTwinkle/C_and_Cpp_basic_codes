#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    int i;
    scanf("%s", s1);

    for(i=0;s1[i]!='\0';i++){
        if(islower(s1[i]))
            s1[i]=toupper(s1[i]);
    }
    strcpy(s2,s1);
    strrev(s1);
    if(strcmp(s1,s2)==0)
        printf("It is palindrome\n");
    else
        printf("It's not palindrome\n");

    return 0;
}
