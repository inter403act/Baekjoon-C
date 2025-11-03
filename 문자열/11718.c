#include <stdio.h>

int main(void){
    char str[101];
    while(fgets(str,sizeof(str),stdin) != NULL){
        printf("%s",str);
    }
}