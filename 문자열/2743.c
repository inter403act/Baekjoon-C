#include <stdio.h>

int main(void){
    char str[101];
    scanf("%s",str);
    int size = 0;
    for(int i=0; str[i]!='\0'; i++){
        size++;
    }
    printf("%d\n",size);
}