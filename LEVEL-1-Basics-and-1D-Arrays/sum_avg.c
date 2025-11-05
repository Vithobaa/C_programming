//Q4 Calculate the sum and average of array elements.
#include <stdio.h>
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
float avg(int arr[],int n){
    int total=sum(arr,n);
    double avg=(double)total/n;
    printf("The avg is :%f",avg);
    
}
int main(){
    printf("Displaying the sum and avg of the elements in an array.\n");
    printf("Enter the size of array:");
    int n;
    scanf("%d",&n);
    printf("Enter the element of the array:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The entered array is [ ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
    printf("The sum of array is %d ",sum(arr,n));
    avg(arr,n);
    return 0;
}
