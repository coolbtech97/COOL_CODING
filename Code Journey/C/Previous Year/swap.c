#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z;
    system("cls");
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    printf("Enter the value of z : ");
    scanf("%d",&z);
    x=y;
    y=z;
    z=x;
    printf("The value of x: %d\nThe value of y: %d\nThe value of z: %d",x,y,z);
    return 0;
}