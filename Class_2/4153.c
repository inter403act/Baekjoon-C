#include <stdio.h>

void selection_sort(int* p,int size);

int main(void){
    int x,y,z;
    while(1){
        scanf("%d %d %d",&x,&y,&z);

        int arr[3] = {x,y,z};
        selection_sort(arr,3);
        if(x==0 && y==0 && z==0) break;
        
        if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2])
            printf("right\n");
        else
            printf("wrong\n");
    }
}

void selection_sort(int* p,int size){
    
    for(int i=0; i<size-1; i++){
        int least = i;
        for(int j=i+1; j<size; j++){
            if(p[j]<p[least]) least = j;
        }
        if(least==i) continue;
        int temp = p[i];
        p[i] = p[least];
        p[least] = temp;
    }
}