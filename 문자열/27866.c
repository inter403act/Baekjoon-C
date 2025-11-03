#include <stdio.h>

int main(void){
    char str[1001];
    scanf("%s",str);
    int i;
    scanf("%d",&i);
    printf("%c\n",str[i-1]);
}