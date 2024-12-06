#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <string.h>
#include <time.h>
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
            double totalCost;       // Tổng tiền phải trả
            double discount = 1.0;  // Mức giảm giá ban đầu là 1 (không giảm giá)

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
            {
                int amount;                                                                // Khai báo biến để lưu số tiền cần đổi
                int denominations[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};                // Mảng các mệnh giá tiền
                int numOfDenominations = sizeof(denominations) / sizeof(denominations[0]); // Tính số lượng mệnh giá tiền

                // Nhập vào số tiền cần đổi
                printf("Nhập vào số tiền cần đổi: ");
                scanf("%d", &amount);

                // Kiểm tra nếu số tiền nhỏ hơn hoặc bằng 0
                if (amount <= 0)
                {
                    printf("Số tiền cần đổi phải lớn hơn 0.\n");
                    break;
                }

                printf("Số tiền cần đổi là: %d đồng\n", amount);
                printf("Các mệnh giá tiền cần đổi là:\n");

                // Lặp qua từng mệnh giá tiền và tính số lượng tờ cần đổi
                for (int i = 0; i < numOfDenominations; i++)
                {
                    int count = amount / denominations[i]; // Tính số tờ cho mệnh giá hiện tại
                    if (count > 0)
                    {
                        printf("%d tờ %d đồng\n", count, denominations[i]); // In kết quả
                    }
                    amount %= denominations[i]; // Cập nhật số tiền còn lại
                }
            }
        }
        break;
        case 6:
        {
            // Total loanamout(số tiền vay), totalamount(Tổng số tiền), interestPayment(lãi suấtThanh toán),principalPayment(tiền gốc Thanh toán),monthlypayment(Thanh toán hàng tháng)
            double loanAmount, interestRate = 0.05, totalAmount, interestPayment, principalPayment, monthlyPayment;
            int months = 12;

            // Nhập số tiền vay từ người dùng
            printf("Nhap so tien vay: ");
            scanf("%lf", &loanAmount); // Nhập số tiền vay

            // Tính số tiền trả mỗi tháng (gốc)
            monthlyPayment = loanAmount / months;
            totalAmount = loanAmount;

            // In tiêu đề bảng
            printf("\nChi tiet so tien can tra trong 12 thang:\n");
            printf("%-10s%-20s%-20s%-20s%-20s\n", "Ky han", "Lai phai tra", "Goc phai tra", "So tien phai tra", "So tien con lai");

            // Lặp qua 12 tháng để tính toán tiền lãi, gốc và tổng tiền phải trả
            for (int i = 1; i <= months; i++)
            {
                interestPayment = totalAmount * interestRate; // Tính tiền lãi
                principalPayment = monthlyPayment;            // Tiền gốc phải trả mỗi tháng
                totalAmount -= principalPayment;              // Giảm số tiền còn lại sau khi trả gốc

                // In thông tin cho từng tháng, bao gồm lãi, gốc, tổng tiền phải trả và số tiền còn lại
                printf("%-10d%-20.2lf%-20.2lf%-20.2lf%-20.2lf\n", i, interestPayment, principalPayment, interestPayment + principalPayment, totalAmount);
            }
        }
        break;
        case 7:
        {
            printf("chuc nang vay tien mua xe dang thuc hien \n");
            // Khai báo các biến cần thiết
            int maxPercentage;               // Tỷ lệ vay tối đa (phần trăm)
            double loanAmount = 500000000;   // Số tiền vay cố định: 500 triệu
            int loanTermYears = 24;          // Thời hạn vay: 24 năm
            double annualInterestRate = 7.2; // Lãi suất cố định: 7.2% mỗi năm
            double downPayment;              // Số tiền trả trước
            double monthlyPayment;           // Số tiền trả góp hàng tháng
            double interestPerMonth;         // Lãi suất hàng tháng
            int totalMonths;                 // Tổng số tháng vay
            double totalPaid;                // Tổng số tiền phải trả cả gốc lẫn lãi

            // Nhập tỷ lệ vay tối đa từ người dùng
            printf("Nhap so phan tram vay toi da (VD: 80 - la tra truoc 20%%): ");
            scanf("%d", &maxPercentage);

            // Tính số tiền trả trước (downPayment)
            downPayment = loanAmount * (1 - (maxPercentage / 100.0));

            // Tính số tiền vay (phần còn lại)
            loanAmount = loanAmount * (maxPercentage / 100.0);

            // Tính tổng số tháng vay
            totalMonths = loanTermYears * 12;

            // Tính lãi suất hàng tháng
            interestPerMonth = annualInterestRate / 100 / 12;

            // Tính số tiền trả góp hàng tháng (dựa trên công thức toán tài chính)
            monthlyPayment = loanAmount * (interestPerMonth / (1 - (1 / pow(1 + interestPerMonth, totalMonths))));

            // Tính tổng số tiền phải trả cả gốc lẫn lãi
            totalPaid = monthlyPayment * totalMonths;

            // Hiển thị kết quả
            printf("\nKet qua:\n");
            printf("So tien tra truoc: %.2lf VND\n", downPayment);
            printf("So tien phai tra gop hang thang: %.2lf VND\n", monthlyPayment);
            printf("Tong so tien phai tra ca goc lan lai: %.2lf VND\n", totalPaid);
        }
        break;
        case 8:
        {
            printf("chuc nang sap xep thong sinh vien dang thuc hien \n");
            int n;
            printf("Nhap so luong sinh vien");
            scanf("%d", &n);
            // khai bao cau truc luu thong tin sinh vien
            typedef struct SinhVien
            {
                char hoTen[50];
                float diem;
                char hocLuc[20];
            };

            struct SinhVien dsSinhVien[n]; // mang luu danh sach sinh vien .
            // nhap thong tin sinh vien
            for (int i = 0; i < n; i++)
            {
                printf("\nNhap Thong tin sinh vien thu %d:\n", i + 1);
                // nhap ho ten
                printf("Ho Ten: ");
                fflush(stdin); // xoa bo nho dem tranh loi khi nhap chuoi
                fgets(dsSinhVien[i].hoTen, sizeof(dsSinhVien[i].hoTen), stdin);
                dsSinhVien[i].hoTen[strcspn(dsSinhVien[i].hoTen, "\n")] = '\0'; // xoa ky tu xuong dong
                // nhap diem
                printf("Diem: ");
                scanf("%f", &dsSinhVien[i].diem);
                // xac dinh hoc luc dua tren diem
                if (dsSinhVien[i].diem >= 9)
                    strcpy(dsSinhVien[i].hocLuc, "Xuất Sắc");
                else if (dsSinhVien[i].diem >= 8)
                    strcpy(dsSinhVien[i].hocLuc, "Giỏi");
                else if (dsSinhVien[i].diem >= 6.5)
                    strcpy(dsSinhVien[i].hocLuc, "Khá");
                else if (dsSinhVien[i].diem >= 5)
                    strcpy(dsSinhVien[i].hocLuc, "Trung Bình");
                else if (dsSinhVien[i].diem >= 3.5)
                    strcpy(dsSinhVien[i].hocLuc, "Yếu");
                else
                    strcpy(dsSinhVien[i].hocLuc, "Kém");
            }
            // sap xep sinh vien theo diem giam dan (bubble sort)
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (dsSinhVien[j].diem < dsSinhVien[j + 1].diem)
                    {
                        struct SinhVien temp = dsSinhVien[j];
                        dsSinhVien[j] = dsSinhVien[j + 1];
                        dsSinhVien[j + 1] = temp;
                    }
                }
            }
            // hien thi danh sach sinh vien sau khi sap xep
            printf("\n Danh sách sau khi sắp xếp theo điểm giảm dần: \n ");
            printf("%-30s%-10s%-20s\n", "Ho Ten", "Diem", "Hoc Luc"); // in tieu de cot

            for (int i = 0; i < n; i++)
            {
                printf("%-30s%-10.2f%-20s\n", dsSinhVien[i].hoTen, dsSinhVien[i].diem, dsSinhVien[i].hocLuc);
            }
        }
        break;
        case 9:
        {
            printf("chuc nang xay dung game fpoly-lott\n");
            printf("Chào mừng bạn đến với game FPOLY-LOTT!\n");
            int user_nums[2];     // Mảng lưu 2 số người chơi nhập
            int random_nums[2];   // Mảng lưu 2 số ngẫu nhiên từ hệ thống
            int match_count = 0;  // Biến đếm số lượng số trúng

            // Khởi tạo seed cho hàm rand
            srand(time(NULL));

            // Sinh 2 số ngẫu nhiên từ 1 đến 15
            random_nums[0] = rand() % 15 + 1;
            do {
                random_nums[1] = rand() % 15 + 1;
            } while (random_nums[1] == random_nums[0]);

            // Nhập 2 số từ bàn phím
            for (int i = 0; i < 2; i++) {
                do {
                    printf("Nhập số thứ %d (01-15): ", i + 1);
                    scanf("%d", &user_nums[i]);

                    // Kiểm tra tính hợp lệ
                    if (user_nums[i] < 1 || user_nums[i] > 15) {
                        printf("Số không hợp lệ. Vui lòng nhập lại (01-15).\n");
                    } else if (i == 1 && user_nums[1] == user_nums[0]) {
                        printf("Số bị trùng với số đầu tiên. Vui lòng nhập lại.\n");
                        user_nums[i] = 0; // Reset để nhập lại
                    }
                } while (user_nums[i] < 1 || user_nums[i] > 15 || (i == 1 && user_nums[1] == user_nums[0]));
            }

            // So sánh số người chơi nhập với số hệ thống
            for (int i = 0; i < 2; i++) { 
                for (int j = 0; j < 2; j++) {
                    if (user_nums[i] == random_nums[j]) {
                        match_count++;
                        break; // Thoát khỏi vòng lặp trong trường hợp trùng
                    }
                }
            }

            // Hiển thị kết quả
            printf("\nKết quả số ngẫu nhiên của hệ thống là: %d và %d\n", random_nums[0], random_nums[1]);
            switch (match_count) {
                case 0:
                    printf("Chúc bạn may mắn lần sau!\n");
                    break;
                case 1:
                    printf("Chúc mừng bạn đã trúng giải nhì!\n");
                    break;
                case 2:
                    printf("Chúc mừng bạn đã trúng giải nhất!\n");
                    break;
            }
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
