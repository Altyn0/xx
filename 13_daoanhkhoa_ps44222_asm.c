#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int menu;
    do
    {
        printf("xin hay lua chon cac chuc nang tuong ung ma ban muon thuc hien 1:\n");
        printf("1. Chuc nang kiem tra so nguyen \n");
        printf("2. Chuc nang tim uoc so chung va boi so chung cua 2 so N\n");
        printf("3. Chuc nang tinh tien cho quan Karaoke\n");
        printf("4. Chuc nang tinh tien dien\n");
        printf("5. Chuc nang doi tien \n");
        printf("6. Chuc nang tinh lai suat vay ngan hang tra gop\n");
        printf("7. Chuc nang vay tien mua xe\n");
        printf("8. Chuc nang sap xep thong tin sinh vien\n");
        printf("9. Chuc nang xay dung game FPOLY-LOTT\n");
        printf("10. Chuc nang xay dung chuong trinh tinh toan phan so\n");
        printf("\n------------------------------------------\n");
        printf("vui long nhap vao chuc nang:");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
        {
            int x;
            printf("Nhập vào một số nguyên: ");
            if (scanf("%d", &x) != 1)
            {
                printf("Vui lòng nhập một số nguyên hợp lệ.\n");
                break;
            }

            // Kiểm tra số nguyên
            printf("Số %d có phải là số nguyên? Có\n", x); // Vì x đã được nhập là số nguyên

            // Kiểm tra số nguyên tố
            int la_so_nguyen_to = 1; // Mặc định là số nguyên tố
            if (x < 2)
                la_so_nguyen_to = 0; // Số nhỏ hơn 2 không phải số nguyên tố
            for (int i = 2; i <= (int)sqrt(x); i++)
            {
                if (x % i == 0)
                {
                    la_so_nguyen_to = 0; // Không phải số nguyên tố
                    break;
                }
            }
            printf("Số %d có phải là số nguyên tố? %s\n", x, la_so_nguyen_to ? "Có" : "Không");

            // Kiểm tra số chính phương
            int can_bac_hai = (int)sqrt(x);
            int la_so_chinh_phuong = (can_bac_hai * can_bac_hai == x) ? 1 : 0;
            printf("Số %d có phải là số chính phương? %s\n", x, la_so_chinh_phuong ? "Có" : "Không");
        }
        break;

        case 2:
        {
            int x, y, uscln = 1, bscnn; // Khai báo hai số nguyên x, y, ước số chung lớn nhất (uscln) và bội số chung nhỏ nhất (bscnn)

            // Nhập hai số nguyên từ người dùng
            printf("Nhập vào hai số nguyên (x, y): ");
            scanf("%d %d", &x, &y);

            // Tìm Ước số chung lớn nhất (USCLN)
            for (int i = 1; i <= (x < y ? x : y); i++)
            { // Lặp từ 1 đến số nhỏ hơn giữa x và y
                if (x % i == 0 && y % i == 0)
                {              // Nếu i là ước chung của cả x và y
                    uscln = i; // Cập nhật giá trị USCLN
                }
            }

            // Tìm Bội số chung nhỏ nhất (BSCNN)
            for (int i = (x > y ? x : y);; i++)
            { // Bắt đầu từ số lớn hơn giữa x và y
                if (i % x == 0 && i % y == 0)
                {              // Nếu i chia hết cho cả x và y
                    bscnn = i; // Lưu giá trị BSCNN
                    break;     // Thoát khỏi vòng lặp khi tìm được BSCNN
                }
            }

            // Hiển thị kết quả USCLN và BSCNN
            printf("USCLN của %d và %d: %d\n", x, y, uscln); // In ước số chung lớn nhất
            printf("BSCNN của %d và %d: %d\n", x, y, bscnn); // In bội số chung nhỏ nhất
        }
        break; // Thoát khỏi case 2

        case 3:
        {
            int startHour, endHour; // Khai báo giờ bắt đầu và giờ kết thúc
            double totalCost;          // Tổng tiền phải trả
            double discount = 1.0;   // Mức giảm giá ban đầu là 1 (không giảm giá)

            // Nhập vào giờ bắt đầu và giờ kết thúc
            printf("Nhập vào giờ bắt đầu (12-23): ");
            scanf("%d", &startHour);
            printf("Nhập vào giờ kết thúc (12-23): ");
            scanf("%d", &endHour);

            // Kiểm tra nếu giờ bắt đầu và giờ kết thúc hợp lệ (trong khoảng từ 12h đến 23h)
            if (startHour < 12 || startHour > 23 || endHour < 12 || endHour > 23 || endHour <= startHour)
            {
                printf("Giờ không hợp lệ. Vui lòng nhập lại.\n");
                break;
            }

            // Tính số giờ sử dụng dịch vụ
            int hours = endHour - startHour;

            // Tính tiền dựa trên số giờ sử dụng
            if (hours <= 3)
            {
                totalCost = hours * 150000; // Giá 3 giờ đầu là 150000 mỗi giờ
            }
            else
            {
                totalCost = 3 * 150000 + (hours - 3) * 150000 * 0.7; // Giảm 30% cho giờ thứ 4 trở đi
            }

            // Kiểm tra nếu giờ bắt đầu trong khoảng 14-17, giảm thêm 10%
            if (startHour >= 14 && startHour <= 17)
            {
                discount = 0.9; // Giảm 10% nếu giờ bắt đầu từ 14h đến 17h
            }

            // Áp dụng giảm giá nếu có
            totalCost *= discount;

            // Hiển thị tổng tiền thanh toán
            printf("Tổng tiền cần thanh toán là: %.0f đồng\n", totalCost);
        }
        break; // Thoát khỏi case 3

        case 4:
        {
            printf("chuc nang tinh tien dien dang thuc hien \n");
              printf("Chuong trinh xay dung tinh tien dien \n");
        float kwh, tiendien = 0;
        printf("\nNhap so dien tieu thu cua ban");
        scanf("%f", &kwh);
        if (kwh <= 50)
        {
            tiendien = kwh * 1678;
        }
        else if (kwh <= 100)
        {
            tiendien = 50 * 1678 + (kwh - 50) * 1734;
        }
        else if (kwh <= 200)
        {
            tiendien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
        }
        else if (kwh <= 300)
        {
            tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
        }
        else if (kwh <= 400)
        {
            tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
        }
        else
        {
            tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
        }
        printf("So tien dien ban can phai tra la : %.2f", tiendien);
    }
        break;
        case 5:
        {
            printf("chuc nang quy doi tien dang thuc hien");
        }
        break;
        case 6:
        {
            printf("tinh lai suat vay ngan hang dang thuc hien\n");
        }
        break;
        case 7:
        {
            printf("chuc nang vay tien mua xe dang thuc hien \n");
        }
        break;
        case 8:
        {
            printf("chuc nang sap xep thong sinh vien dang thuc hien \n");
        }
        break;
        case 9:
        {
            printf("chuc nang xay dung game fpoly-lott\n");
        }
        break;
        case 10:
        {
            printf("chuc nang xay dung chuong trinh tinh phan so dang thuc hien\n");
        }
        break;
        case 0:
        {
            printf("see u again sir/ms\n");
            exit(0);
        }

        break;
        default:
            printf("Vui long chon lai lua chon co san");
            break;
        }
        printf("\n------------------------------------------\n");

    }

    while (menu != 0);
    printf("\n------------------------------------------\n");
    return 0;
}
