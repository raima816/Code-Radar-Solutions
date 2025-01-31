#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a, &b,&c);
    if(a==b && b==c){
        printf("Equilateral");
    }
    else if(a==b ||a==c || b==a||b==c || c==a||c==b){
    printf("Isosceles");
    }
    else(a!=b && a!=c){
        printf("Scalene");
    }
    return 0;
}