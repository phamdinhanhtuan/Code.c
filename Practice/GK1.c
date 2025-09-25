/*#include<stdio.h>

int tinhTong(int n){
    int sum =0;
    while(n>0){
        sum += n % 10;
        n /= 10;
        }
        return sum;
    }
int main()
{
    int n;
    printf("Nhập số n: ");
    scanf("%d",&n);
//kiem tra xem có phải là số nguyên dương hay không,và gọi hàm
    if(n>0){
        int tong = tinhTong(n);
        printf("Tổng các chữ số của %d là: %d\n",n,tong);
    }else{
        printf("Vui lòng nhập lại số khác: ");
    }
return 0;
}


#include<stdio.h>
#include<math.h>
void kiemTraSoNguyenTo(int n){
    if(n<2){
         printf("Đây không phải là số nguyên tố !",n);
    return ;
}
    for(int i=2;i<sqrt(n);i++){
        if(n % i == 0){
            printf("Đây khong phải số nguyên tố !",n);
            return;
        }
    }
    printf("Đây là số nguyên tố",n);
}
int main()
{
    int n;
    printf("Nhập số n:");
    scanf("%d",&n);
    kiemTraSoNguyenTo(n);
return 0;
}


#include<stdio.h>
void nhapMang(int arr[],int n){
    printf("Nhap cac phan tu: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
}
int timMax(int arr[],int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int timMin(int arr[],int n){
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main()
{    
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);
    int arr[n];
    nhapMang(arr,n);
    int max = timMax(arr, n);
    int min = timMin(arr, n);
    printf("So lon nhat: %d\n",max);
    printf("So nho nhat: %d\n",min);
return 0;
}

//Đề 8: Tính tổng các lẻ trong mảng
#include<stdio.h>
void nhapMang(arr[],int n){
    printf("Cac phan tu: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
}
int tinhTongCacSoLe(arr[],int n){
    int sum = 0;
    for(int i=0; i<n;i++){
        if(arr[i] % 2 != 0){
            sum += arr[i];
            return sum ;
        }
    }
}
int main()
{
    int n;
    int arr[n];
    printf("Nhập số n:");
    scanf("%d",&n);
    nhapMang(arr,n);
    int tongLe =tinhTongCacSoLe(arr,n);
    printf("Tổng các số lẻ là: %d",tongLe);
}
//Đề 9: Tính tổng các chẳn trong mảng
#include<stdio.h>
void nhapMang( int arr[],int n){
    printf("Nhập các phần tử: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
}
int tinhTongCacSoChan(int arr[],int n){
    int Tong= 0;
    for(int i=0; i<n;i++){
        if(arr[i] % 2 == 0){
            Tong += arr[i];
        }
    }
    return Tong;
}

int main()
{
    int n;
    printf("Nhập số n: ");
    scanf("%d",&n);
    int arr[n];
    nhapMang(arr,n);
    int tinhChan= tinhTongCacSoChan(arr,n);
    printf("Tổng các số chẳn là %d",tinhChan);
return 0;
}

//Bài 1 ,trang 42
#include<stdio.h>
int n,arr[100];
void cau_a(){
    do{
        printf("Nhâp số nguyên: ");
        scanf("%d",&n);
    }while(n <= 0 || n>10);

    for(int i=0; i<n; i++){
        printf("Cac phần tử %d la: ",i + 1);
        scanf("%d", &arr[i]);
    }
}

 void cau_b(){
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
 }

void cau_c(){
    for(int i=0; i<n; i++){
        if(arr[i] % 3 ==0){
            printf("%d",arr[i]);
        }
    }
}

int cau_d(){
    int soAm = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            soAm ++;
        }
    }
    return soAm;
}

int cau_e(){
    int sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int cau_f(){
    int sum =0;
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            sum += arr[i];
        }
    }
    return sum;
}

float cau_g(){
    float sum = 0.0f;
    for(int i=1; i<n; i++){
        sum += arr[i];
    }
    int TBC = sum/n;
 return TBC;
}
 
float cau_h(){
    float sum =0.0f;
    int soAm =0;
    for(int i=1; i<n; i++){
        if(arr[i] < 0){
            soAm ++;
            sum += arr[i];
        }
    } 
    int TBC = sum/soAm;
return TBC;
}
int main()
{
    int n;
    float TBC = 0.0f;
    cau_a ();
        printf("\nXuất các dãy số vừa nhập: ");
    cau_b ();
        printf("\nCác phần tử chia hết cho 3: ");
    cau_c();
    int soAm = cau_d();
        printf("\nSố lượng số âm có trong mảng là: %d",soAm);
    int Tong = cau_e();
        printf("\nTổng các số trong mảng là: %d",Tong);
    int Tongcacsoam = cau_f();
        printf("\nTổng các số âm có trong mảng là: %d",Tongcacsoam);
    float tbc = cau_g();
        printf("\nTrung bình cộng của mảng là: %0.2f",tbc);
    float tbc_am = cau_h();
        printf("\nTrung bình cộng các phần tử âm là: %0.2f",tbc_am);
return 0;
}*/
