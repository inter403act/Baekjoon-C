#include <stdio.h>

int main(void){
    char str[1000001];
    int count[26] = {0};
    int size = 0;

    scanf("%s",str);

    for(int i=0; str[i]!='\0'; i++){
        if('a'<=str[i] && str[i]<='z'){
            str[i] = str[i] - 32;
        }
        size++;
    }

    for(int i=0; i<size; i++){
        count[str[i]-'A']++;
    }

    int dup_count = 0;
    int max_count = count[0];
    int max_index = 0;

    for(int i=1; i<26; i++){
        if(max_count<count[i]){
            max_count = count[i];
            max_index = i;
        } 
    }

    for(int i=0; i<26; i++){
        if(max_count==count[i]) dup_count++;
    }

    if(dup_count==1){
        printf("%c\n",'A'+max_index);
    }
    else{
        printf("?\n");
    }
}