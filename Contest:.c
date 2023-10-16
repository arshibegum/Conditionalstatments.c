#include<stdio.h>
int main()
{
    int X,A,B;
    scanf("%d %d %d",&X,&A,&B);
    int y = (A*1)+(B*2);
    if(y>=X){
        printf("Qualify");
    }
    else
    printf("Not Qualify");
}