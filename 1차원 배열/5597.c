#include <stdio.h>

int main(void){
    int arr[31];
    for(int i=1; i<31; i++){
        arr[i] = 0;
    }
    for(int i=0; i<28; i++){
        int index;
        scanf("%d",&index);
        arr[index] = 1;
    }

    for(int i=1; i<31; i++){
        if(arr[i]==0) printf("%d\n",i);
    }

}