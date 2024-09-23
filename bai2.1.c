#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Nhap so a: ");scanf("%d",&a);
    printf("Nhap so b: ");scanf("%d",&b);
    if(a>b)
    {
        max=a;

    }
    else
    {
        max=b;
    }
    printf("Gia tri lon nhat cua hai so la: %d",max);
    return 0;
}