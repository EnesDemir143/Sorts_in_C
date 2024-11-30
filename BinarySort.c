#include<stdlib.h>
#include<stdio.h>

void binarySearch(int arr[],int min,int max,int lookingFor){

        int mid=min +(max-min/2);
        if(arr[mid] == lookingFor){
            printf("It was found at %d. index",mid);
            return;
        }
        if(arr[mid]<=lookingFor){
            min=mid +1;
        }else{
            max=mid-1;
        }

        if(min>max){
           printf("Not founded");
           return;
        }
        binarySearch(arr,min,max,lookingFor);
    

}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int min=0;
    int max=sizeof(arr)/sizeof(arr[0])-1;
    binarySearch(arr,min,max,4);

}