#include<stdio.h>
int main(){
    int n;
    printf("nhập số nguyên dương: ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Vui lòng nhập số lớn hơn 0 ");
    }
   
   printf("ước số chung của: %d ",n);
   for ( int i = 1; i <= n; i++)
   {
    if (n%i==0)
    {
        printf("\n%d ",i);
    }  
   }

    return 0;

}