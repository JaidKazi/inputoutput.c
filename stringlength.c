#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Kazi Mohammad Jaid";
    char b[20]={'K','a','z','i',' ','M','o','h','a','m','m','a','d',' ','J','a','i','d','\0'};

    
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));

    return 0;
}