#include <stdio.h>

int main(void){
    int N;
    scanf("%d",&N);
    char input[101];
    scanf("%s",input);
    int sum = 0;
    for(int i=0; input[i]!='\0'; i++){
        sum += (input[i]-'0'); //문자를 숫자로 mapping
    }

    printf("%d\n",sum);
}