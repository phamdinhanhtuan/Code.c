#include<stdio.h>
int main()
/*a
{
int x;
printf("Hay nhap mot so nguyen:");
scanf("%d",&x);
printf("So nguyen vua nhap la: %d",x);
}

//b
{
    float y;
    printf("Hay nhat so thu nhat:");
    scanf("%f",y);
    printf("So thuc vua nhap la: %f",y);
    return 0;
}
*/
//c
{
    int a,b,tong=0,hieu=0,tich=0;
    float thuong=8.0;
    printf("Nhap so thu nhat a: ");
    scanf("%d",&a);
    printf("Nhap so thu hai b: ");scanf("%d",&b);
    tong = a+b;
    hieu = a-b;
    tich = a*b;
    thuong = (float)a/b;
    printf("%d + %d = %d\n",a,b,tong);
    printf("%d - %d = %d\n",a,b,hieu);
    printf("%d * %d = %d\n",a,b,tich);
    printf("%d / %d = %2.1f",a,thuong);
    return 0;
}