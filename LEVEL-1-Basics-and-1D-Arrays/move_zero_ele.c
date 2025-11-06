//Q11 Move all the zero element to the one end of the array:
#include<stdio.h>
int move_zero(int *arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(*(arr+i)!=0){
            *(arr+count)=*(arr+i);
            count++;
        }
    }
    while(count<n){
            *(arr+count)=0;
            count++;
        }
}
int main(){
    int n;
    printf("Move zero element to end of the array\n");
    printf("Enter the size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element with some zero element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The entered element is:[");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("]");
    printf("the array after moving the zero to the end of the array:");
    move_zero(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        return 0;
    }
