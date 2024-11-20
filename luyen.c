#include <stdio.h>
#define MAX 100

void nhapSL(int *n) {
    do {
        printf("Nhap so luong cac phan tu (0 < n < %d): ", MAX);
        scanf("%d", n);
        if (*n <= 0 || *n >= MAX) {
            printf("Vui long nhap lai so khac.\n");
        }
    } while (*n <= 0 || *n >= MAX);
}

void nhapDS(int a[], int n) {
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatDS(int a[], int n) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void xuat3(int a[], int n) {
    printf("Xuat cac phan tu chia het cho 3: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

void xuat4(int a[], int n) {
    printf("Cac phan tu am chan: ");
    for (int i = 0; i < n; i++) {
        if (a[i] < 0 && a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    int a[MAX];
    nhapSL(&n);
    nhapDS(a, n);
    xuatDS(a, n);
    xuat3(a, n);
    xuat4(a, n);
    return 0;
}
