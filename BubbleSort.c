#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int size){

    for (size_t i = 0; i < size-1; i++)
    {
        for (size_t j = 0; j < size-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }

    printf("\nSortlu hali: ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main(){

    int arr[] = {2,3,6,1,6,7,8,4,5,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Sortsuz hali:");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    bubbleSort(arr,size);

}