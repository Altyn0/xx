#include <stdio.h>
#include <math.h>

int max(int *x, int *y)
{
    int m = *x > *y ? *x : *y;
    *y *= 100;
    *x *= 100;
    return m;
}

int main()
{
    int a, b, c;
    printf("Vui long nhap so a: ");
    scanf("%d", &a);
    printf("Vui long nhap so b: ");
    scanf("%d", &b);
    c = max(&a, &b);
    printf(" gia tri lon nhat la:%d", c);
    printf("\n gia tri cua a la: %d", a);
    printf("\n gia tri cua b la: %d", b);
    return 0;
}