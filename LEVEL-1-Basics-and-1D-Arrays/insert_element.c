#include<stdio.h>
int main(){
    printf("adding an element to an array:\n");
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
    int addele,pos;
    printf("\nenter the element you want to add: ");
    scanf("%d",&addele);
    printf("Enter the potision number you want to add at: ");
    scanf("%d",&pos);
    
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=addele;
    n++;

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
