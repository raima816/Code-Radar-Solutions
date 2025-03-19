#include<stdio.h>
int main(){
    int n,mul=1;
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
       mul=n*i;
       printf("%d x %d = %d",n,i,mul);
       printf("\n");
    }
    return 0;
}