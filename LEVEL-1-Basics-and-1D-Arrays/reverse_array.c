// Q1 Read n numbers and print them in reverse order.
#include<stdio.h>
void reverse(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        printf(" %d ",arr[i]);
    }
}
int main(){
    printf("Enter size: ");
    int n ;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the given array is: [");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("]\n");
    printf("the reverse order of the array is :[");
    reverse(arr,n);
    printf("]");
}
