#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int sums(int);
int main()
{
    int n;
    system("cls");
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("%d",sums(n));
    return 0;
}
int sums(int s)
{
    if(s==0)
    {
        return 0;
    }
    return s*s+sums(s-1);
}