#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int a,b,c;
    int dt,cv,p;
    printf("Nhap so a: ");scanf("%u",&a);
    printf("Nhap so b: ");scanf("%u",&b);
    printf("Nhap so c: ");scanf("%u",&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        cv = a+b+c;
        p  = cv/2;
        dt = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("a,b,c tao thanh tam giac %d,%d",cv,dt);
    }
    else
    { printf("\na,b,c khong tao thanh tam giac");} 
return 0;
}