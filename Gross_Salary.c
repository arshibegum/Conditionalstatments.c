#include<stdio.h>
int main()
{
    float BS,DA,HRA,GS;
    scanf("%f",&BS);
    if (BS<=10000)
    {
        DA=(80.0/100)*BS;
        HRA=(20.0/100)*BS;
        GS=BS+DA+HRA;
        printf("%.2f",GS);
        
    }
    else if (BS<=20000)
    {
        DA=(90.0/100)*BS;
        HRA=(25.0/100)*BS;
        printf("%.2f",BS+DA+HRA);
        
    }
    else
    {
        DA=(95.0/100)*BS;
        HRA=(30.0/100)*BS;
        printf("%.2f",BS+DA+HRA);
    }
}

