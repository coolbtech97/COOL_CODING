#include<stdio.h>
#include<stdlib.h>
void swap(int*,int*);
int main()
{
    int a,b;
    system("cls");
    printf("Enter the value of a,b : ");
    scanf("%d%d",&a,&b);
    printf("Before swap Value of a and b : %d %d",a,b);
    swap(&a,&b);
    printf("\nAfter swap Value of a and b : %d %d",a,b);
    return 0;
}
void swap(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}