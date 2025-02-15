#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=31; i>=0; i--){
        if(n>>i & 1){
            print("1");
        }
        else if(i<31 && (n>>(i+1))){
            print("0");
        }
    }
    if(n==0){
        printf("0");
    }
    return 0;

}