#include<stdio.h>
int main(){
    int n,flag=1;
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0; i < n; i++)
        scanf("%d",&arr[i]);
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            flag=0;
            break;
        }
    }
if(flag){
    printf("Sorted\n");

}
else
printf("Not Sorted\n");
}