#include <stdio.h>

int main(void){
    int origin[6] = {1,1,2,2,2,8};
    int user[6];
    for(int i=0; i<6; i++){
        scanf("%d",&user[i]);
    }
    for(int i=0; i<6; i++){
        printf("%d ",origin[i]-user[i]);
    }
}