#include <stdio.h>
/*// bai 1  ham tim gia tri lon nhat cua 3 so
int timGiaTriLonNhat(int so1,int so2,int so3){
    int max = so1; // gia dinh so1 la so lon nhat
    if (so2>max){
        max = so2;//cap nhat max neu so2 lon hon
    }
    if (so3>max){
        max = so3;// cap nhat max neu so3 lon hon
    }
    return max;// tra ve gia tri lon nhat
}
int main(){
    int so1,so2,so3;
    printf("nhap so thu nhat: ");
    scanf("%d",&so1);
    printf("Nhap so thu hai: ");
    scanf("%d",&so2);
    printf("nhap so thu ba: ");
    scanf("%d",&so3);
    int soMax = timGiaTriLonNhat(so1,so2,so3);
    printf("So lon nhat trpng 3 so la: %d\n",soMax);

}
*/

/*
//xay dung ham tinh nam nhuan

int checkYear(int year)
{
    int flag = 0; // bien co hieu, mac dinh la so 0 (khong phai nam nhuan)
    // kiem tra neu nam chia het cho 400
    if (year % 400 == 0)
    {
        flag = 1;
    }
    // kiem tra neu nam chia het cho 4 nhung khong chia het cho 100
    else if (year % 4 == 0 && year % 100 != 0)
    {
        flag = 1;
    }
    return flag;
}

int main()
{
    int year;
    // yeu cau nguoi dung nhap nam
    printf("Nhap vao mot nam: ");
    scanf("%d", &year);
    //goi ham kiem tra nam nhuan
    if (checkYear(year))
    {
        printf("%d la nam nhuan.\n", year);
    }
    else
    {
        printf("%d khong phai la nam nhuan.\n", year);
    }
}

*/

/*
// bai so 3 hoan doi vi tri
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}

int main(){
    int a,b;
    printf("Nhap gia tri a: ");
    scanf("%d",&a);
    printf("Nhap gia tri b: ");
    scanf("%d",&b);
    printf("Truoc khi hoan vi: a = %d , b = %d \n",a,b);
    swap(&a,&b);
    printf("Sau khi hoan vi : a = %d, b = %d\n",a,b);
}

*/

/*// bang cuu chuong nhan tu 2 den 9
int main() {
    // Vòng lap cho cac so tu 1 đến 9 (hang doc)
    for (int i = 1; i <= 9; i++) {
        // Vòng lặp cho các số từ 2 đến 9 (hang ngang)
        for (int j = 2; j <= 9; j++) {
            printf("%d x %d = %2d\t", j, i, j * i); // in ket qua nhan
        }
        printf("\n"); // xuong dong sau moi hang doc
    }

    return 0;
}

*/



/*
// in hinh chu nhat sao rong .
int main() {
    int width, height;

    // nhap chieu rong va chieu cao cua hinh chu nhat.
    printf("Nhap chieu rong cua hinh chu nhat: ");
    scanf("%d", &width);
    printf("Nhap chieu cao cua hinh chu nhat: ");
    scanf("%d", &height);

    // Duyet qua tung hang
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            // In sao cho vien (hang dau, hang cuoi, cot dau, cot cuoi)
            if (i == 1 || i == height || j == 1 || j == width) {
                printf("*");
            } else {
                printf(" "); // ben trong la khoang trang 
            }
        }
        printf("\n"); // xuong dong sau moi hang 
    }

    return 0;
}
*/



// tao hinh tam giac
int main(void)
{
    int n, i, j;

    // Yêu cầu người dùng nhập chiều cao của hình tam giác
    printf("Nhập chiều cao của hình tam giác: ");
    scanf("%d", &n);

    // Vòng lặp để tạo hình tam giác
    for (i = 1; i <= n; i++)
    {
        // Hiển thị khoảng trắng
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Hiển thị các ngôi sao
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        // Chuyển sang dòng tiếp theo
        printf("\n");
    }

    return 0;
}




