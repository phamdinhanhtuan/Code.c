//nhập ba số thực a,b,c.Hãy tìm giá trị lơn nhất của ba số trên và xuất ra kết quả.
#include<stdio.h>
int main()
{
    float a,b,c,max ;
    printf("Nhap so a: ");scanf("%f",&a);
    printf("Nhap so b: ");scanf("%f",&b);
    printf("Nhap so c: ");scanf("%f",&c);
    max = a;
    if(b>max)
    {
        max = b;
    }
    if(c>max)
    {
        max = c;
    }
    printf("Gia tri cua lon nhat cua ba so la: %f",max);
    return 0;

}