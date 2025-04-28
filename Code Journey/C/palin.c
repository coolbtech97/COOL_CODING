#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[21],b[21];
    system("cls");
    printf("Enter a string : ");
    fgets(a,21,stdin);
    strcpy(b,a);
    printf(strcmp(a,b)?"Palindrome":"Not Palindrome");
    return 0;
}