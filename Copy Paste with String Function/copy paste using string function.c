#include<stdio.h>
#include<string.h>
int main()
{
    char first_name[20],last_name[20],full_name[40];
    printf("First name: ");
    scanf("%s", first_name);
    printf("Last name: ");
    scanf("%s", last_name);
    int i;

    strcpy(full_name,first_name);
    i=strlen(full_name);
    full_name[i]=' ';
    full_name[i+1]='\0';

    printf("Full name: ");
    puts(strcat(full_name,last_name));

    return 0;
}
