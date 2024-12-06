#include <stdio.h>

// Định nghĩa struct SinhVien
typedef struct SinhVien
{
    int MaLop;
    int chiso;
    float siso; 
} SinhVien; 


void nhapMangSinhVien(SinhVien sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap Ma lop: ");
        scanf("%d", &sv[i].MaLop);

        printf("Nhap chi so: ");
        scanf("%d", &sv[i].chiso);

        printf("Nhap diem: ");
        scanf("%f", &sv[i].siso);
    }
}


void xuatMangSinhVien(SinhVien sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ma lop: %d, Chi so: %d, sỉ số lớp: %.2f\n", sv[i].MaLop, sv[i].chiso, sv[i].siso);
    }
}

int main() {
    int m;
    printf("Vui long nhap kich thuoc: ");
    scanf("%d", &m);

    if (m > 32) {
        printf("Kich thuoc vuot qua gioi han!\n");
        return 1;
    }
    SinhVien SV1[32]; // Không cần từ khóa struct vì đã typedef
    nhapMangSinhVien(SV1, m);
    xuatMangSinhVien(SV1, m);

    return 0;
}
