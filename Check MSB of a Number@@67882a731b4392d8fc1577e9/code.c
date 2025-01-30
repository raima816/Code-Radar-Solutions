#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int msb=(a >> 31) & 1;
    if(msb==1){
        print("Set");
        else{
            print("Not Set");
        }
    }
    
    return 0;
}