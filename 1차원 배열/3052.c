#include <stdio.h>

int main(void){
    int arr[10];
    for(int i=0; i<10; i++){
        int input;
        scanf("%d",&input);
        arr[i] = input%42;
    }

    

    int flag[42] = {0};
    for(int i=0; i<10; i++){
        flag[arr[i]] = 1;
    }
    
    int count = 0;
    for(int i=0; i<42; i++){
        count += flag[i];
    }

    printf("%d\n",count);
}