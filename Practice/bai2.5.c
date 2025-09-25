#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double delta,x1,x2;
    printf("Nhap so a: ");
    scanf("%lf",&a);
    printf("Nhap so b: ");
    scanf("%lf",&b);
    printf("Nhap so c: ");
    scanf("%lf",&c);
    delta = b*b-4*a*c;
    if(delta>0)
    {
        x1=(-b + sqrt(delta))/(2*a);
        printf("x1=%2.1lf\n",x1);
        x2=(-b-sqrt(delta))/(2*a);
        printf("x2=%2.1ld\n",x2);
        printf("phuong trinh co hai nghiem phan biet \n");
    }else if(delta == 0)
    {   x1 = -b /(2*a);
        printf("Phuong trinh co nghiem kep x: %2.1lf",x1);
    }
    else
    {
        printf("Phuong trinh khong co nghiem ");
    }
return 0;
}