//Q8 bubble sort
#include<stdio.h>
int bubbleSort(int *arr,int n){
    for(int i=0;i<n;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                int temp=*(arr+j);
                *(arr+j)= *(arr+j+1);
                *(arr+j+1) = temp;
                swapped=1;
            }
        }
        if(!swapped)break;
    }
}
int main(){
    printf("Bubble sort.\n"); 
    printf("Enter the size:");
    int n;
    scanf("%d",&n);
    printf("Enter the element of the array:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the entered array is : [");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("]\n");
    bubbleSort(arr,n);
    printf("sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
}
