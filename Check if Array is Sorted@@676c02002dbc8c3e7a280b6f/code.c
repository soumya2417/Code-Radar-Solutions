#include<stdio.h>
#include<string.h>
int main(){
    int N,i;
    char digits[101];
    int sorted = 1;
    scanf("%d",&N);
    scanf("%s", digits);
    
    for (i=0;i <N-1; i++){
        if (digits[i]> digits[i+1]){
            sorted=0;
            break;
        }
    }
    if (sorted)
        printf("Sorted\n");
    else
        printf("Not Sorted\n");
    
return 0;
}