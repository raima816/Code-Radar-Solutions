#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<32;i++){
        int b=1<<i;
        if(a&b==1){
            printf("%d",i);
            break;
        }
    }
    
    
    return 0;
}