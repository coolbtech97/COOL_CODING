#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={10,20,30,40,50,60};
    system("cls");
    int *p1=arr;
    int *p2=arr+4;
    printf("p2-p1= %d\n",p2-p1);
    printf("(char*)p2-(char*)p1= %d",(char*)p2-(char*)p1);
    getchar();
    return 0;
}