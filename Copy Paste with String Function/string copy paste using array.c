#include<stdio.h>
int main()
{
    char first_name[20],last_name[20],full_name[40];
    int i,n,c;
    scanf("%s%s", first_name,last_name);

    for(i=0;first_name[i]!='\0';i++){
        full_name[i]=first_name[i];
}
    full_name[i]=' ';

    for(n=0;last_name[n]!='\0';n++){
        full_name[++i]=last_name[n];
}
    full_name[++i]='\0';

    puts(full_name);

    return 0;
}
