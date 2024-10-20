#include<stdio.h>
#include<math.h>
int n;
int soNguyenTo(){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
                return 0;
            }
                return 1;}
int main()
{
    int n;
    printf("Nhap so:");
    scanf("%d",&n);
    
    int arr[n];//khai bao kich thuoc
    printf("Nhap cac phan tu:");
    for( int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
//tim max,min
    int min= arr[0],max= arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];//cập nhật lại giá trị min
        }
    if(arr[i]>max){
        max = arr[i];
        }
    }
//tim chan ,le
    int chan = 0;
    int le = 0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0)
            chan ++;
        else 
            le ++;
    }
//liệt kế số nguyên tố trong mảng
    for(int i=0;i<n;i++){
        if(arr[i]){
            printf("%d",arr[i]);
        }
    }
    printf("số chẳn: %d\n",chan);
    printf("số lẻ: %d\n",le);
    printf("max:%d , min:%d\n", max, min);
    return 0;
}
