#include <stdio.h>
int main() {
    int sellingprice, costprice;
    scanf("%d %d",&sellingprice, &costprice);
    if(sellingprice>costprice){
        printf("Loss");
    }
    else if(costprice>sellingprice){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}