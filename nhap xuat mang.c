//Nhập xuất mảng
#include<stdio.h>

void NhapMang(int n,float a[]){
    for(int i=0; i<n ; i++){
        printf("Nhap cac phan tu %d: ",i+1);
        scanf("%f",&a[i]);
    }
}
 
void XuatMang(int n,float a[]){
        printf("Mang da nhap: ");
    for(int i=0; i<n ;i++)
        printf("%.2f",a[i]);
}

int main(){
    int n;
        printf("Nhap so phan tu cua mang: ");
        scanf("%d",&n);
    if(n<=0){
        printf("Vui long nhap lai so lon hon 0");
        return 1;
    }
    float a[n];
    NhapMang(n,a);
    XuatMang(n,a);
return 0;
}
