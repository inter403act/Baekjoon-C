#include <stdio.h>

int get_size(const char* str);

int main(void){
    int T;
    scanf("%d",&T);

    for(int i=0; i<T; i++){
        char str[1001];
        scanf("%s",str);
        int size = get_size(str);
        printf("%c%c\n",str[0],str[size-1]);
    }
}

int get_size(const char* str){
    int size = 0;
    for(int i=0; str[i]!='\0'; i++){
        size++;
    }
    return size;
}