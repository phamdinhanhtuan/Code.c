//Đặt lính canh các bài tập c cơ bản
#include<stdio.h>
float LonNhat(int n,float arr[]){
    float max;
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            max =  arr[i];
        }
    }
    return max;
}
float DuongDau(int n, float arr[]){
    for(int i=1; i<n; i++){
        if(arr[i]>0)
        return arr[i];
    }
    return -1;
}
int chanCuoi(int n,float arr[]){
    for(int i= n-1;i<=0;i++){
        if(n % 2 == 0)
        return arr[i];
    }
    return -1;
}
int viTriNhoNhat(int n, float arr[]){
    int indexMin = 0;
    for(int i=0; i<n; i++){
        if(arr[i]< arr[indexMin])
            indexMin = i;
    }
    return indexMin;
}
int viTriChanDau(int n,float arr[]){
    for(int i=0; i<n; i++){
        if(n % 2 == 0)
        return i;
    }
return -1;
}
int main()
{
    int n;
        printf("Nhap so phan tu cua mang: ");
        scanf("%d",&n);
    if(n<=0){
        printf("Vui long nhap lai so khac");
    return 1;
    }
    float arr[n];
        for(int i=0; i<n; i++){
        printf("\nNhap cac phan tu %d: ",i+1);
        scanf("%f",&arr[i]);
    }
     
    printf("Gia tri lon nhat trong mang a: %.2f\n", LonNhat(n, arr));
    printf("Gia tri duong dau tien trong mang a: %.2f\n", DuongDau(n, arr));
    printf("So chan cuoi cung: %d\n",chanCuoi(n,arr));
    printf("Vi tri nho nhat: %d\n",viTriNhoNhat(n,arr));
    printf("Vi tri chan dau: %d\n",viTriChanDau(n,arr));
return 0;
}
