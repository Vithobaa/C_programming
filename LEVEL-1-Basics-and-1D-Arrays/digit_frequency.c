//Count frequency of each digit (0–9) in an array.
#include<stdio.h>
int frequency(int arr[],int n){
    int freq[10]={0};
    for (int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<10;i++){
        printf("%d",freq[i]);
    }
}
int main(){
    printf("Displaying the frequency of each digit (0–9) in an array.\n");
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
    printf(" ]\n");
    frequency(arr,n);
    return 0;
}
