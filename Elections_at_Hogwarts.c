#include<stdio.h>
int main()
{
    int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    if (X>50)
    printf("Gryffindor");
    else if (Y>50)
    printf("Slytherin");
    else if (Z>50)
    printf("Hufflepuff");
    else
    printf("NOTA");
}