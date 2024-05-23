#include<stdio.h>
int main(){
int arr[100];
printf("Enter Five Number :");
for(int i=0;i<5;i++)
{
    int *ptr = &arr[i];

}
printf("Output -");
for(int i=0; i<5;i++)
{
    int *p =&arr[i];
    printf("%d",*p);
    return 0;
}
}