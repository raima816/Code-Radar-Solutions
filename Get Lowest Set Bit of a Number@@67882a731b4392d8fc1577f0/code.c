#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<32;i++){
        if(a&(1<<i)){
            printf("%d",i);
            break;
        }
    }
    
    
    return 0;
}