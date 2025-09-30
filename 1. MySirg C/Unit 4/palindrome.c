#include<stdio.h>
#include<string.h>
int main()
{
    char a[21],b[21];
    system("cls");
    printf("Enter the string : ");
    gets(a);
    strcpy(b,a);
    printf(strcmp(a,b)?"Not Palindrome":"Palindrome");
    printf("\n");
    return 0; 
}