#include <stdio.h>

int main(){
    float array[10];
    int i;
    for(i = 0;i < 10;i++){
        printf("%p\n",array+i);
    }
    return 0;
}