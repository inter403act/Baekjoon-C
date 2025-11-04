#include <stdio.h>


int main(void){
    char str[101];
    scanf("%s",str);
    int size = 0; 
    for(int i=0; str[i]!='\0'; i++){
        size++;
    }

    int i = 0;
    int j = size-1;
    int flag = 1;
    while(1){
        if(i>=j) break;

        if(str[i]!=str[j]) flag = 0;

        i++;
        j--;
    }
    printf("%d",flag);
}