//Q3 Count how many even and odd numbers are in an array.
#include <stdio.h>
int count_odd_even(int arr[],int n){
    int odd=0;
    int even=0;
    for (int i=0;i<n;i++){
        if(arr[i]%2==0) even++;
        if(arr[i]%2!=0) odd++;
    }
    printf("Number of odds:%d\n",odd);
    printf("Number of evens:%d\n",even);
    
}
int main(){
    printf("Displaying the number of odd and even number in an array.\n");
    printf("Enter the size of array:");
    int n;
    scanf("%d",&n);
    printf("Enter the element of the array:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The entered array is [");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
    count_odd_even(arr,n);
    return 0;
}
