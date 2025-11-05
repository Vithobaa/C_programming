//Q6 Delete an element from an array (by value or position).
#include<stdio.h>
int main(){
    printf("Delete an element from an array:\n");
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int indexrem;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the given array is:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    int rem;
    printf("\nenter the element you want to remove: ");
    scanf("%d",&rem);
    for(int i=0;i<n;i++){
        if(arr[i]==rem){
            indexrem=i;
            break;
        }
    }
    //shift the element to the left.
    if(indexrem!=-1){
        for(int i=indexrem;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
