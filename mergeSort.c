#include <stdio.h>
#include <stdlib.h>

void merge (int arr[],int left[],int right[],int leftsize,int rightsize){

    int i=0,j=0,k=0;

    while (i<leftsize && j<rightsize)
    {
        if(left[i]<right[j]){
            arr[k++]=left[i++];
        }else{
            arr[k++]=right[j++];
        }
    }
    
    while (leftsize>i)
    {
        arr[k++]=left[i++];
    }
        while (rightsize>j)
    {
        arr[k++]=right[j++];
    }
}


void mergeSort(int arr[],int size){

    int leftsize=size/2;
    int rightsize=size-leftsize;

    int left[leftsize];
    int right[rightsize];

    if(size<2){
        return;
    }

    for (size_t i = 0; i < leftsize; i++)
    {
        left[i]=arr[i];
    }
    for (size_t i = 0; i < rightsize; i++)
    {
        right[i]=arr[i+leftsize];
    }
    
    mergeSort(left, leftsize);
    mergeSort(right, rightsize);

    merge(arr,left,right,leftsize,rightsize);
}


int main()
{

    int arr[] = {1,3,5,2,6,3,9,5,4};
    int size=(sizeof(arr)/sizeof(arr[0]));
            printf("\nSortsuz hali: ");
    for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {   
        printf("%d ",arr[i]);
    }
    mergeSort(arr, size);
        printf("\nSortlu hali: ");
        for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {   
        printf("%d ",arr[i]);
    }
    


}

