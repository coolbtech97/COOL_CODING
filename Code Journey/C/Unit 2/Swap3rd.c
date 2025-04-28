#include<stdio.h>
int main()
{
    int a,b,c;
    system("cls");
    printf("Enter 2 valuess : ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping, The values are\n\n\ta=%d\n\tb=%d",a,b);
    return 0;
}