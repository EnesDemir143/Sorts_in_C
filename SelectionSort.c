#include<stdio.h>
#include<stdlib.h>

void selectionSort(int arr[],int size){

    for (size_t i = 0; i < size-1; i++)
    {
        int min=arr[i];
        int minIndex=i;
        for (size_t j = i+1; j < size; j++)
        {
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }
            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
    }
        printf("\nSortlu hali: ");
    for (size_t i = 0; i < size; i++)
    {   
        printf("%d ",arr[i]);
    }
}


int main(){

    int arr[] = {2,3,6,1,1,6,7,8,4,5,9};    
    int size=sizeof(arr)/sizeof(arr[0]);
        printf("\nSortsuz hali: ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    selectionSort(arr,size);

}