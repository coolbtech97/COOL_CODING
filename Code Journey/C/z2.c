#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,c=0;
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    system("cls");
    while(97)
    {
        printf("\n\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            //printf("%d ",j[i[arr]]);
            //printf("%d ",arr[i][j]);
            printf("%d ",c==0?j[i[arr]]:arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            //printf("%d ",i[j[arr]]);
            //printf("%d ",arr[j][i]);
            printf("%d ",c==0?i[j[arr]]:arr[j][i]);
        }
    }
    if(c==1)
    {
        break;
    }
    c=1;
    }
    return 0;
}