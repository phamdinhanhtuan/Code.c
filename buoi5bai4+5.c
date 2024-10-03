/*bai4a
#include<stdio.h>
int main()
{
   int n,j,i,k;
   do{
    printf("Nhap so n= ");
    scanf("%d",&n);
}while(n <= 0 || n>10);
    printf("Nhap so k= ");
    scanf("%d",&k);
for(i=1;i<=n;i++)
{
    for(j=1;j<=k;j++){
        printf("*");
    }
    printf("\n");
}

  return 0;
}
bai4b
#include<math.h>
#include<stdio.h>
int n;
void so_nguyen()
{
    do{
        printf("nhap so n:  ");
        scanf("%d",&n);
    }while(n <= 0 || n > 10 );
}

void in_dau(){
    for(int i=1;i <=n;i++){
        for(int j=1;j <= i ;j++){
        printf("*");
    }
    printf("\n");
    }
}
int main(){
    int n;
    so_nguyen();
    in_dau();
    
}
//bai5
{
for (int i = 1; i <= 10; i++) {
         for (int j = 1; j <= 10; j++) {    
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }
return 0;
}*/



