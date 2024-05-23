#include<stdio.h>
int main()
{
    int x=30;
    printf("%d\n",x);
    int *a=&x;
    *a=9;
    printf("%d\n",a);
    printf("%d\n",a);
    printf("%d\n",*a);

return 0;

}