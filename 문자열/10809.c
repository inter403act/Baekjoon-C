#include <stdio.h>

int main(void){
    char str[100];
    int alpha_index[26];
    for(int i=0; i<26; i++){
        alpha_index[i] = -1;
    }
    scanf("%s",str);

    for(int i=0; str[i]!='\0'; i++){
        if(alpha_index[str[i]-'a'] == -1)
            alpha_index[str[i]-'a'] = i;
    }

    for(int i=0; i<26; i++){
        printf("%d ",alpha_index[i]);
    }
}