#include <stdio.h>
#include <string.h>
int main()
{
   /*
   //bai 1
    char s[100];
   printf("Xin moi nhap vao chuoi: ");
   gets(s);
   int i = 0;
   int n = 0; // bien de dem so nguyen am
   int p = 0; // bien de dem so phu am
   // Khi gia tri cuoi cung cua mang != null

   while (s[i++] != '\0')
   {
      // Nếu s[i] = ‘a’ hoặc ‘i’ hoặc ‘e’ hoặc ‘u’ hoặc ‘o’ thì n++
      // Ngược lại: p++
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
         n++;
      else
         p++;
   }

   printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, n, p);

   */


  // bai 2 :
   // Khai báo username và password hệ thống
   char userSys[] = "admin"; // Username mặc định
   int passSys = 12345;      // Password mặc định

   // Khai báo biến lưu trữ username và password nhập từ người dùng
   char user[100];
   int pass;

   // Yêu cầu người dùng nhập vào username
   printf("Moi ban nhap username: ");
   scanf("%s", user); // Đọc username từ người dùng

   // Yêu cầu người dùng nhập vào password
   printf("Moi ban nhap password: ");
   scanf("%d", &pass); // Đọc password từ người dùng

   // Kiểm tra thông tin đăng nhập
   if (strcmp(user, userSys) == 0 && pass == passSys)
   {
      // Nếu username và password khớp với hệ thống
      printf("Dang nhap thanh cong!\n");
   }
   else
   {
      // Nếu username hoặc password không khớp
      printf("Dang nhap that bai!\n");
   }

   
/*
 //bai 3:
    // Tạo mảng lưu trữ 5 chuỗi, mỗi chuỗi tối đa 19 ký tự + ký tự '\0'
    char s[5][20]; 
    char temp[20]; // Biến tạm để hoán đổi chuỗi
    int i, j;      // Biến đếm

    // Yêu cầu người dùng nhập 5 chuỗi
    printf("Nhap 5 chuoi bat ky:\n");
    for (i = 0; i < 5; i++) {
        printf("Nhap chuoi thu %d: ", i + 1);
        scanf("%s", s[i]); // Đọc chuỗi từ người dùng
    }

    // Chạy giải thuật sắp xếp nổi bọt (Bubble Sort)
    for (i = 0; i < 4; i++) { // Lặp qua các phần tử
        for (j = 0; j < 4 - i; j++) { // So sánh các phần tử liền kề
            if (strcmp(s[j], s[j + 1]) > 0) { 
                // Nếu chuỗi s[j] lớn hơn s[j + 1], hoán đổi
                strcpy(temp, s[j]);      // Lưu s[j] vào biến tạm
                strcpy(s[j], s[j + 1]); // Gán s[j + 1] vào s[j]
                strcpy(s[j + 1], temp); // Gán biến tạm vào s[j + 1]
            }
        }
    }

    // Xuất kết quả chuỗi đã được sắp xếp
    printf("\nCac chuoi sau khi sap xep theo thu tu chu cai la:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
*/

  
return 0;
   


}