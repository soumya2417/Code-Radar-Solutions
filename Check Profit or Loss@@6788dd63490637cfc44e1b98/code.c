#include<stdio.h>
int main(){
    int cost,selling;
    scanf("%d %d",&cost,&selling);
    if (selling>cost){
        printf("Profit");
    }else if (selling<cost){
        printf("Loss");
    }else{
        printf("No Profit No Loss");

    }
    return 0;
}