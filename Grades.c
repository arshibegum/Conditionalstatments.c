#include<stdio.h>
int main()
{
    int p,c,b,m,cs;
    scanf("%d %d %d %d %d",&p,&c,&b,&m,&cs);
    float s;
    s=((p+c+b+m+cs)/500.0)*100;
    if (s>=90)
    printf("Grade A");
    else if (s>=80)
    printf("Grade B");
    else if (s>=70)
    printf("Grade C");
    else if (s>=60)
    printf("Grade D");
    else if (s>=40)
    printf("Grade E");
    else 
    printf("Grade F");
}