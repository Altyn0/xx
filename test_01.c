#include <stdio.h>
#include<math.h>
int main()
{
    int choice;
    do
    {
        printf("\n++++++++menu+++++++\n");
        printf("\n1 so nguyen ,so nguyen to ");
        printf("\n2");
        printf("\n3");
        printf("\n4");
        printf("\n5 Out program");
        printf("\nVui long chon chuong trinh : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int n,snt=1;
            printf("Vui long nhap so nguyen:  ");
            scanf("%d",&n);
            if (n<=1)
            {
                printf("%d Khong phai la so nguyen to :",n);
                return 0;
            }
            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i ==0)
                {
                    printf("Khong phai la so nguyen to ");
                    snt = 0;
                    break;
                }
                
            }
        if (snt)
        {
            printf("La so nguyen to: %d \n",n);    
        }
        else{
            printf("Khong phai so nguyen to: %d \n",n);
        }

        }
        break;
        case 2:
        {
        }
        break;
        case 3:
        {
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