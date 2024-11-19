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
