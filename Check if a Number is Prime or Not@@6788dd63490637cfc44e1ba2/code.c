#include <stdio.h>
int main() {
    int a,prime=1;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
        return 0;
        }
    for (i=2;i*i<=num;i++){
        if(num%i==0){
            prime=0;
            break;
        }
    }
    if(prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
   
    return 0;
}