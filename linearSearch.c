#include<stdio.h>
#include<stdlib.h>

void linearSearch(int arr[],int size,int lookingFor){

    for (size_t i = 0; i < size; i++)
    {
        if(arr[i]==lookingFor){
            printf("Found at index %d",i);
            return;
        }
    }
    printf("Not found");

}

int main(){

    int arr[] = {2,3,6,1,6,7,8,4,5,9};
    linearSearch(arr,sizeof(arr)/sizeof(arr[0]),4);
}