#include <stdio.h>
#include <string.h>

// Định nghĩa struct SinhVien
typedef struct SinhVien
{
    int MaSV;
    char Ten[50];
    float diem;
}; // Chắc chắn dấu ; có ở đây

// Hàm nhập danh sách sinh viên
void nhapMangSinhVien(struct SinhVien sv[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap MASV: ");
        scanf("%d", &sv[i].MaSV);

        printf("Nhap ten: ");
        scanf("%s", sv[i].Ten); // Bỏ ký tự & nếu lỡ thêm

        printf("Nhap diem: ");
        scanf("%f", &sv[i].diem);
    }    
}

// Hàm xuất danh sách sinh viên
void xuatMangSinhVien(struct SinhVien sv[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("MASV: %d, Ten: %s, Diem: %.2f\n", sv[i].MaSV, sv[i].Ten, sv[i].diem);
    }    
}

int main(){
    int m;
    printf("Vui long nhap kich thuoc: ");
    scanf("%d", &m);

    if (m > 32) {
        printf("Kich thuoc vuot qua gioi han!\n");
        return 1;
    }

    struct SinhVien SV1[32];
    nhapMangSinhVien(SV1, m);
    xuatMangSinhVien(SV1, m);

    return 0;
}
