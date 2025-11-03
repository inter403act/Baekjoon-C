#include <stdio.h>

int main(void){
    int T;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        char S[20];
        int R;
        scanf("%d %s",&R,S);
        for(int i=0; S[i]!='\0'; i++){
            for(int j=0; j<R; j++){
                printf("%c",S[i]);
            }
        }
        printf("\n");
    }
}