#include<stdio.h>
int main()
{
    int n,i,j,dem;
    printf("Nhap so n: ");scanf("%d",&n);
    for(i=2;i<=n;i++){
        dem=0;
    
    for(j=2;j<=i/2;j++){
        if(i % j == 0){
            dem++;
        }
    }
    if(dem==0){
        printf("%d",i);
        }
    }
    printf("\n");

}
