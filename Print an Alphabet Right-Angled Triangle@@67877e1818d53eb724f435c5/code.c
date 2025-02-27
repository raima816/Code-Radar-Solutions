#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n; i<=n; i++){
        for(int j='A'; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}