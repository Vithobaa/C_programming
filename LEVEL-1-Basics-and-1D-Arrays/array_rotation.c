// array rotation:left and right rotation
#include<stdio.h>
int reverse(int *arr,int start,int end){
    while(start<end){
        int temp=*(arr+start);
        *(arr+start)=*(arr+end);
        *(arr+end)=temp;
         start++;
         end--;
    }
}
int leftrotate(int *arr,int n,int k){
    k=k%n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}
int rightrotate(int *arr,int n,int k){
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}
int main() {
    int n,k;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    int copy[n];
    printf("enter the element ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the times of rotate:");
    scanf("%d",&k);
    printf("Original array is [");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        copy[i] = arr[i];
    }
    printf("]\n");
    printf("left rotation :\n");
    leftrotate(arr, n, k);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("right rotation:\n");
    rightrotate(copy,n,k);
    for(int i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }
    return 0;
}  
