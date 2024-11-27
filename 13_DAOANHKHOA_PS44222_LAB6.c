#include <stdio.h> // Thư viện chuẩn cho các hàm nhập xuất

int main(void) {
    int choice; // Biến để lưu lựa chọn bài toán của người dùng

    do {
        // Hiển thị menu để người dùng lựa chọn bài toán
        printf("\n--- MENU ---\n");
        printf("1. Tinh trung binh tong cac so chia het cho 3 trong mang\n");
        printf("2. Tim gia tri lon nhat va nho nhat trong mang\n");
        printf("3. Sap xep mang theo thu tu giam dan\n");
        printf("4. Tinh binh phuong cac phan tu trong ma tran 2 chieu\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban (0-4): ");
        scanf("%d", &choice); // Nhập lựa chọn từ bàn phím

        switch (choice) { // Xử lý theo lựa chọn của người dùng
            case 1: { 
                // Bài 1: Tính trung bình tổng các số chia hết cho 3 trong mảng
                int n, i = 0; // Khởi tạo biến n và chỉ số i
                float tong = 0, tb; // Khởi tạo biến tổng và biến trung bình
                int count = 0; // Biến đếm số phần tử chia hết cho 3

                printf("Nhap so luong phan tu cua mang: ");
                scanf("%d", &n); // Nhập số phần tử của mảng

                int mang[n]; // Khai báo mảng có n phần tử

                printf("Nhap cac phan tu cua mang:\n");
                do {
                    printf("Phan tu thu %d: ", i + 1); // Nhập từng phần tử của mảng
                    scanf("%d", &mang[i]);
                    i++;
                } while (i < n); // Lặp cho đến khi nhập đủ n phần tử

                i = 0; // Đặt lại i để duyệt mảng
                do {
                    if (mang[i] % 3 == 0) { // Kiểm tra nếu phần tử chia hết cho 3
                        tong += mang[i]; // Cộng phần tử vào biến tổng
                        count++; // Tăng biến đếm
                    }
                    i++;
                } while (i < n); // Lặp qua tất cả các phần tử trong mảng

                if (count > 0) { // Nếu có phần tử chia hết cho 3
                    tb = tong / count; // Tính trung bình
                    printf("Gia tri trung binh cua cac so chia het cho 3 la: %.2f\n", tb);
                } else {
                    printf("Khong co so nao chia het cho 3 trong mang.\n");
                }
                break;
            }

            case 2: { 
                // Bài 2: Tìm giá trị lớn nhất và nhỏ nhất trong mảng
                int n, i = 0, max, min; // Khai báo các biến

                printf("Nhap so luong phan tu cua mang: ");
                scanf("%d", &n); // Nhập số lượng phần tử của mảng

                int mang[n]; // Khai báo mảng

                printf("Nhap cac phan tu cua mang:\n");
                do {
                    printf("Phan tu thu %d: ", i + 1); // Nhập từng phần tử của mảng
                    scanf("%d", &mang[i]);
                    i++;
                } while (i < n);

                // Khởi tạo giá trị ban đầu của max và min
                max = min = mang[0];

                i = 1; // Bắt đầu từ phần tử thứ 2
                do {
                    if (mang[i] > max) max = mang[i]; // Cập nhật max nếu tìm thấy giá trị lớn hơn
                    if (mang[i] < min) min = mang[i]; // Cập nhật min nếu tìm thấy giá trị nhỏ hơn
                    i++;
                } while (i < n); // Lặp qua tất cả các phần tử

                printf("Gia tri lon nhat trong mang la: %d\n", max);
                printf("Gia tri nho nhat trong mang la: %d\n", min);
                break;
            }

            case 3: { 
                // Bài 3: Sắp xếp mảng theo thứ tự giảm dần
                int n, i = 0, j;

                printf("Nhap so luong phan tu cua mang: ");
                scanf("%d", &n); // Nhập số phần tử của mảng

                int mang[n]; // Khai báo mảng

                printf("Nhap cac phan tu cua mang:\n");
                do {
                    printf("Phan tu thu %d: ", i + 1); // Nhập từng phần tử
                    scanf("%d", &mang[i]);
                    i++;
                } while (i < n);

                // Sắp xếp mảng giảm dần
                i = 0;
                do {
                    j = i + 1;
                    do {
                        if (mang[i] < mang[j]) { // Nếu phần tử sau lớn hơn phần tử trước
                            int temp = mang[i]; // Hoán đổi hai phần tử
                            mang[i] = mang[j];
                            mang[j] = temp;
                        }
                        j++;
                    } while (j < n);
                    i++;
                } while (i < n - 1);

                printf("Mang sau khi sap xep theo thu tu giam dan:\n");
                i = 0;
                do {
                    printf("Phan tu thu %d: %d\n", i + 1, mang[i]); // Xuất từng phần tử
                    i++;
                } while (i < n);
                break;
            }

            case 4: { 
                // Bài 4: Tính bình phương các phần tử trong ma trận 2 chiều
                int n, m, i = 0, j;

                printf("Nhap so hang n: ");
                scanf("%d", &n); // Nhập số hàng
                printf("Nhap so cot m: ");
                scanf("%d", &m); // Nhập số cột

                int mang[n][m]; // Khai báo ma trận 2 chiều

                printf("Nhap cac phan tu cua ma tran:\n");
                do {
                    j = 0;
                    do {
                        printf("Phan tu [%d][%d]: ", i + 1, j + 1); // Nhập từng phần tử
                        scanf("%d", &mang[i][j]);
                        j++;
                    } while (j < m);
                    i++;
                } while (i < n);

                printf("Ma tran binh phuong cac phan tu la:\n");
                i = 0;
                do {
                    j = 0;
                    do {
                        printf("%d ", mang[i][j] * mang[i][j]); // Xuất bình phương từng phần tử
                        j++;
                    } while (j < m);
                    printf("\n"); // Xuống dòng sau mỗi hàng
                    i++;
                } while (i < n);
                break;
            }

            case 0: 
                // Thoát chương trình
                printf("Thoat chuong trinh. Cam on ban da su dung!\n");
                break;

            default:
                // Xử lý lựa chọn không hợp lệ
                printf("Lua chon khong hop le. Vui long chon tu 0 den 4.\n");
        }

    } while (choice != 0); // Thoát vòng lặp khi người dùng nhập `0`

    return 0; // Kết thúc chương trình
}
