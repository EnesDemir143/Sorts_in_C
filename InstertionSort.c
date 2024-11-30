#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int arr[],int size){

    for (size_t i = 1; i < size; i++)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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

printf("Sortruz hali:");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

InsertionSort(arr,size);

}