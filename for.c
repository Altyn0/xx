#include <stdio.h>
int main (){
    int i,n;
    int tong=0;
    printf("vui long nhap N");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        tong += i;
    }
    
    printf("Tong cua ban la : %d",tong);

    return 0; 

}