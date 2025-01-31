#include <stdio.h>
int main() {
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&c);
    switch(ch){
        case '+':
        printf("%d",a+b);
        break;
        case'-':
        printf("%d",a-b);
        case'*':
        printf("%d",a*b);
        break;
        case '/':
        if(b==0){
            printf("Error");
        } else{ 
        printf("%d",a/b);
        }
        break;
        default: 
        printf("Error");
        break;
    }
    
    return 0;
}