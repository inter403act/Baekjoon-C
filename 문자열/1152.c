#include <stdio.h>

int word_count(const char* str);

int main(void){
    char str[1000001];
    fgets(str,sizeof(str),stdin);

    int size = 0;
    //입력이 줄바꿈없이 EOF로 들어오는 경우 , 줄바꿈 있는 경우 모두 안전
    while(str[size] != '\n' && str[size] != '\0'){ 
        size++;
    }
    //줄바꿈 있을 경우 줄바꿈 문자를 널 문자로, 줄바꿈 없는 경우엔 이미 마지막에 널 존재
    if(str[size] == '\n'){
        str[size] = '\0'; 
    }

    printf("%d",word_count(str));
}

int word_count(const char* str){
    int waiting = 1;
    int count = 0;

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            waiting = 1;
        }
        else{
            if(waiting == 1){
                count++;
                waiting = 0;
            }
            
        }
    }
    return count;
}