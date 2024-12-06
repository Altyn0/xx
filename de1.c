#include <stdio.h>
int main()
{
    int choice;

    do
    {
        printf("\n=+++++MeNu++++++++=\n");
        printf("1. Chuong trinh nhap so nguyen/liet ke tat ca cac so nguyen.\n");
        printf("2. chuong trinh nhap vao mot so nguyen X/ liet ke cac so lon hon trong mang.\n");
        printf("3. nhap vao so nguyen duong n vao chuoi/ xuat ra chuoi n vua nhap.\n");
        printf("4. khai bao cau truc nhan vien.\n");
        printf("5. Out program\n");
        printf("Chon chuc nang (1-5): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int n;
            printf("Vui long nhap so nguyen N ");
            scanf("%d", &n);
            if (n < 0)
            {
                printf("Vui long nhap lai day khong phai la so nguyen");
                return 0;
            }
            printf("uoc so cua so nguyen la");
            for (int i = 1; i < n; i++)
            {
                if (n % i == 0)
                {
                    printf(" %d ", i);
                }
            }
        }
        break;
        case 2:
        {
            int n;
            printf("nhap so luong phan tu cua mang:  ");
            scanf("%d", &n);
            if (n < 0)
            {
                printf("Phan tu khong duoc nho hon 0");
                return 0;
            }
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                printf("Phan tu thu : %d ", i + 1);
                scanf("%d", &arr[i]);
            }
            printf("Mang da nhap: ");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            int x;
            printf("\nVui long nhap 1 so X bat ky: ");
            scanf("%d",&x);
            printf("\nCac so lon hon %d trong mang la:\n", x);
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > x)
                {
                    printf("%d ", arr[i]);
                    count ++;
                }
            }
        }
        break;
        case 3:
        {   
            int n;
            printf("Nhap so nguyen duong: ");
            scanf("%d",&n);
            if (n<0)
            {
                printf("Day khong phai la so nguyen duong");
            }
            char chuoi[n][100];
            printf("Nhap %d chuoi cua ban vao: ",n);
            for (int i = 0; i < n; i++)
            {
                printf("Chuoi thu %d: ",i+1);
                scanf("%s",chuoi[i]);
            }
            printf("\nCac chuoi vua nhap la: \n");
            for (int i = 0; i < n; i++)
            {
                printf("%s\n", chuoi[i]);
            }
            
        }
        break;
        case 4:
        {
        }
        break;

        default:
            break;
        }

    } while (choice != 5);

    return 0;
}