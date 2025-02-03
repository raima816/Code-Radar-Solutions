#include <stdio.h>
int main() {
    int a,i,prime=1;
    scanf("%d",&a);
    if(a==1 || a==0){
        prime=0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            prime=0;
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