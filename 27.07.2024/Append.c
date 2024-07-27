#include<stdio.h>
#include<string.h>
int main()
{
    char str[6]="Geek";
    char ch='s';
    printf("Original String:%s\n",str);
    printf("Character to be appended:%c\n",ch);

    strncat(str,&ch,1);

    printf("Appended String:%s\n",str);
 
    return 0;
}
