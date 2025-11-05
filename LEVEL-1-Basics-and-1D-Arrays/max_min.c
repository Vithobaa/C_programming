//Q2 Find the maximum and minimum element in an array.
#include <stdio.h>
void max_min(int arr[],int n){
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)max=arr[i];
        if (arr[i]<max)min=arr[i];
    }
    printf("Max: %d " ,max);
    printf("Min: %d ",min);
    
}
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the entered array is:");
     for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    max_min(arr,n);
    
}
