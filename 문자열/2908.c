#include <stdio.h>

int main(void){
    char a[4],b[4];

    scanf("%s %s",a,b);
    int x,y;

    x = (a[2]-'0')*100 + (a[1]-'0')*10 + (a[0]-'0')*1;
    y = (b[2]-'0')*100 + (b[1]-'0')*10 + (b[0]-'0')*1;

    x > y ? printf("%d",x) : printf("%d",y);
    
}