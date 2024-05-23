#include <stdio.h>

int function(int array2[5]) {

    int i;
    while(i<4) {
        array2[i]=array2[i]+1;
        i++;
    }

    return array2[5];
}

int main() {
int array[5]={1,2,3,4,5};
int answer;

answer[5]=function(array[5]);

int j;
while(j<4) {
    printf("%d \n",answer[j]);
    j++;
}

return 0;
}