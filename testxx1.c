#include <stdio.h>

int main() {
    int n;
    
    // Nhập vào số nguyên n
    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);

    // a) Liệt kê tất cả các số dương, lẻ, nhỏ hơn n
    printf("Các số dương, lẻ, nhỏ hơn n là:\n");
    for (int i = 1; i < n; i += 2) { // Bắt đầu từ 1, tăng 2 mỗi lần
        printf("%d ", i);
    }
    printf("\n");

    // b) Tính trung bình cộng các số dương chia hết cho 7 nhỏ hơn n
    int tong = 0, dem = 0;
    for (int i = 1; i < n; i++) {
        if (i % 7 == 0) { // Kiểm tra chia hết cho 7
            tong += i;
            dem++;
        }
    }

    if (dem > 0) {
        float tbc = (float)tong / dem; // Ép kiểu để tính trung bình cộng
        printf("Trung bình cộng các số dương chia hết cho 7 nhỏ hơn n là: %.2f\n", tbc);
    } else {
        printf("Không có số dương chia hết cho 7 nhỏ hơn n.\n");
    }

    return 0;
}
