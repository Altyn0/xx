#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int menu;

    do {
        // Hiển thị menu
        printf("Xin hay lua chon cac chuc nang tuong ung ma ban muon thuc hien:\n");
        printf("1: Tinh trung binh tong\n");
        printf("2: Tim so nguyen to\n");
        printf("3: Tim so chinh phuong\n");
        printf("4: Thoat\n");
        printf("\n------------------------------------------\n");
        printf("Xin moi ban chon chuc nang (1, 2, 3, 4): ");
        scanf("%d", &menu);

        switch (menu) {
        case 1: {
            printf("Tinh trung binh tong\n");

            int min, max;
            float tong = 0;     // Biến lưu tổng các số chia hết cho 2
            int bienDem = 0;    // Biến đếm số lượng số chia hết cho 2
            float trungBinh;    // Biến lưu trung bình

            // Nhập min và max từ bàn phím
            printf("Nhập giá trị min: ");
            scanf("%d", &min);
            printf("Nhập giá trị max: ");
            scanf("%d", &max);

            if (min > max) {
                printf("Giá trị min phải nhỏ hơn hoặc bằng max. Vui lòng thử lại.\n");
                break;
            }

            // Tính tổng và số lượng các số chia hết cho 2
            for (int i = min; i <= max; i++) {
                if (i % 2 == 0) {
                    tong += i;
                    bienDem++;
                }
            }

            // Tính trung bình
            if (bienDem > 0) {
                trungBinh = tong / bienDem;
                printf("Trung bình tổng các số chia hết cho 2 từ %d đến %d là: %.2f\n", min, max, trungBinh);
            } else {
                printf("Không có số nào chia hết cho 2 trong khoảng từ %d đến %d.\n", min, max);
            }
        }
        break;

        case 2: {
             printf("Tim so nguyen to\n");

    int min, max;
    // Nhập min và max từ bàn phím
    printf("Nhập giá trị min: ");
    scanf("%d", &min);
    printf("Nhập giá trị max: ");
    scanf("%d", &max);

    if (min > max) {
        printf("Giá trị min phải nhỏ hơn hoặc bằng max. Vui lòng thử lại.\n");
        break;
    }

    printf("Các số nguyên tố từ %d đến %d là:\n", min, max);
    int found = 0; // Biến kiểm tra có số nguyên tố nào không

    for (int x = min; x <= max; x++) { // Lặp qua từng số trong khoảng [min, max]
        if (x < 2) continue; // Bỏ qua các số nhỏ hơn 2, vì chúng không phải số nguyên tố

        int count = 0; // Biến đếm số ước của `x`
        for (int i = 2; i < x; i++) { // Kiểm tra ước số của `x`
            if (x % i == 0) { // Nếu `x` chia hết cho `i`, tăng `count`
                count++;
                break; // Nếu tìm thấy 1 ước, không cần kiểm tra thêm
            }
        }

        if (count == 0) { // Nếu không có ước nào, `x` là số nguyên tố
            printf("%d ", x);
            found = 1; // Đánh dấu đã tìm thấy số nguyên tố
        }
    }

    if (!found) { // Nếu không tìm thấy số nguyên tố nào
        printf("Không có số nguyên tố nào trong khoảng này.\n");
    }
}
break;

        case 3: {
            printf("Tim so chinh phuong\n");

    int min, max;
    // Nhập min và max từ bàn phím
    printf("Nhập giá trị min: ");
    scanf("%d", &min);
    printf("Nhập giá trị max: ");
    scanf("%d", &max);

    if (min > max) {
        printf("Giá trị min phải nhỏ hơn hoặc bằng max. Vui lòng thử lại.\n");
        break;
    }

    printf("Các số chính phương từ %d đến %d là:\n", min, max);
    int found = 0; // Biến kiểm tra có số chính phương nào không

    for (int x = min; x <= max; x++) { // Lặp qua từng số trong khoảng [min, max]
        int count = 0; // Biến kiểm tra số chính phương
        for (int i = 1; i * i <= x; i++) { // Kiểm tra từ 1 đến căn bậc hai của x
            if (i * i == x) { // Nếu i * i bằng x, x là số chính phương
                printf("%d ", x); 
                count = 1; // Đánh dấu là số chính phương
                found = 1; // Đánh dấu đã tìm thấy số chính phương
                break; // Thoát khỏi vòng lặp kiểm tra
            }
        }
        if (count == 0) {
            continue; // Không làm gì nếu x không phải là số chính phương
        }
    }

    if (!found) { // Nếu không tìm thấy số chính phương nào
        printf("Không có số chính phương nào trong khoảng này.\n");
    }
}
break;
        case 4: {
            printf("See you again, sir/ms!\n");
            exit(0);
        }
        break;

        default:
            printf("Vui lòng chọn lại một lựa chọn hợp lệ (1, 2, 3, hoặc 4).\n");
            break;
        }

        printf("\n------------------------------------------\n");

    } while (menu != 4);

    return 0;
}
