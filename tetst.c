#include <stdio.h>
#include <math.h>


int kiem_tra_so_nguyen_to(int x) {
    if (x < 2) 
        return 0; 
    for (int i = 2; i <= (int)sqrt(x); i++) {
        if (x % i == 0) 
            return 0; 
    }
    return 1; 
}


int nhap_so_nguyen() {
    int x;
    printf("Nhập vào một số nguyên: ");
    while (scanf("%d", &x) != 1) {
        printf("Vui lòng nhập một số nguyên hợp lệ: ");
        while (getchar() != '\n'); 
    }
    return x;
}

int main() {
    int x = nhap_so_nguyen();
    printf("Số %d có phải là số nguyên? Có\n", x);
    int la_so_nguyen_to = kiem_tra_so_nguyen_to(x);
    printf("Số %d có phải là số nguyên tố? %s\n", x, la_so_nguyen_to ? "Có" : "Không");

    return 0;
}
