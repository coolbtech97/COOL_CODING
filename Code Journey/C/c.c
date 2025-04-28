#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int d,m,y;                                          
    
    printf("Enter date : ");
    scanf("%02d%02d%04d",&d,&m,&y);
    printf("%d-%d-%d",d,m,y);
    return 0;
}