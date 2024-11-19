#include <stdio.h>
#include <stdlib.h>

/*int tinhtong4(int a, int b)
{
    int tong;
    tong = a + b;
    return tong; // ket thuc ham va tra ve ket quả
}



int main()
{
    int x, y, tong;
    printf("nhao vao x y: ");
    scanf("%d%d", &x, &y);
    cach 1
    tinhtong4(x,y);
    printf("Tong la:%d ",tinhtong4(x,y));
    // cach 2
    tong = tinhtong4(x, y);
    printf("tong la:%d", tong);

    return 0;
}*/

void bangcuuchuong(int n)
{
    int i, m,j;
    for(j=1;j<=9;j++){
        for (i = 1; i <= 10; i++)
    {
        m = n * i;
        printf("bang cuu chuong la %d * %d = %d\n",n,i,m );
    }
    }
    
}
int main()
{
    int  n;
    printf("Nhap n ");
    scanf("%d", &n);
    bangcuuchuong(n);
    return 0;
}
