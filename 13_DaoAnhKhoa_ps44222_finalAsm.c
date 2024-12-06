#include <stdio.h>
#include <string.h>

// Khai báo cấu trúc sinh viên
struct SinhVien
{
    char maSV[20];
    char tenSV[50];
    float diemThi;
    char ketQua[10];
};

int main()
{
    int luaChon;
    int tiepTuc = 1;

    // Khai báo biến cho bài 2
    int mang[100], n;

    // Khai báo mảng sinh viên cho bài 4
    struct SinhVien dsSV[4];

    do
    {
        printf("\n=== MENU ===\n");
        printf("1. Kiem tra so N , co chia het cho 7 , kiem tra chan le, so co lon hon 50 khong .\n");
        printf("2. nhap mang N So nguyen , in ra phan tu nho nhat trong mang , cho biet co bao nhieu phan tu trong mang\n");
        printf("3. Nhap xuat 1 sinh vien  \n");
        printf("4. Xu ly danh sach sinh vien dau hay rot \n");
        printf("5. Thoat\n");
        printf("Chon bai (1-5): ");
        scanf("%d", &luaChon);

        switch (luaChon)
        {
        case 1:
        {
            int n;
            printf("Nhap so n: ");
            scanf("%d", &n);

            
            if (n % 7 == 0)
                printf("Chia het cho 7 \n");
            else
                printf("Khong chia het cho 7 \n");

            
            if (n % 2 == 0)
                printf("So chan\n");
            else
                printf("So le\n");

           
            if (n > 50)
                printf("Lon hon 50\n");
            else
                printf("Khong lon hon 50\n");
            break;
        }

        case 2:
        {
            
            printf("Nhap so phan tu: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("Nhap phan tu %d: ", i);
                scanf("%d", &mang[i]);
            }

           
            int min = mang[0];
            for (int i = 1; i < n; i++)
            {
                if (mang[i] < min)
                    min = mang[i];
            }
            printf("So nho nhat: %d\n", min);

            int demChan = 0;
            for (int i = 0; i < n; i++)
            {
                if (mang[i] % 2 == 0)
                    demChan++;
            }
            printf("So luong so chan: %d\n", demChan);
            break;
        }

        case 3:
        {
            struct SinhVien sv;
            printf("Nhap ma SV: ");
            fflush(stdin);
            gets(sv.maSV);
            printf("Nhap ten SV: ");
            fflush(stdin);
            gets(sv.tenSV);
            printf("Nhap diem: ");
            scanf("%f", &sv.diemThi);

            if (sv.diemThi >= 5)
                strcpy(sv.ketQua, "Dau");
            else
                strcpy(sv.ketQua, "Rot");

            printf("\nThong tin sinh vien:\n");
            printf("Ma SV: %s\n", sv.maSV);
            printf("Ten SV: %s\n", sv.tenSV);
            printf("Diem: %.2f\n", sv.diemThi);
            printf("Ket qua: %s\n", sv.ketQua);
            break;
        }

        case 4:
        {
            
            for (int i = 0; i < 4; i++)
            {
                printf("\nNhap SV %d:\n", i + 1);
                printf("Nhap ma SV: ");
                fflush(stdin);
                gets(dsSV[i].maSV);
                printf("Nhap ten SV: ");
                fflush(stdin);
                gets(dsSV[i].tenSV);
                printf("Nhap diem: ");
                scanf("%f", &dsSV[i].diemThi);

                if (dsSV[i].diemThi >= 5)
                    strcpy(dsSV[i].ketQua, "Dau");
                else
                    strcpy(dsSV[i].ketQua, "Rot");
            }

           
            int soDau = 0;
            for (int i = 0; i < 4; i++)
            {
                if (strcmp(dsSV[i].ketQua, "Dau") == 0)
                    soDau++;
            }

            
            printf("\nDanh sach sinh vien:\n");
            for (int i = 0; i < 4; i++)
            {
                printf("\nSinh vien %d:\n", i + 1);
                printf("Ma SV: %s\n", dsSV[i].maSV);
                printf("Ten SV: %s\n", dsSV[i].tenSV);
                printf("Diem: %.2f\n", dsSV[i].diemThi);
                printf("Ket qua: %s\n", dsSV[i].ketQua);
            }
            printf("\nTong so sinh vien dau: %d\n", soDau);
            break;
        }

        case 5:
        {
            tiepTuc = 0;
            printf("Tam biet!\n");
            break;
        }

        default:
        {
            printf("Lua chon khong hop le!\n");
            break;
        }
        }
    } while (tiepTuc);

    return 0;
}