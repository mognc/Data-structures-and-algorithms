#include<stdio.h>

int main(){
    int arr[] = {2, 3, 4, 10, 40};

    int s = sizeof(arr)/sizeof(arr[0]);
    int mid,high,low,key;

    high = s-1;
    low =0;
    mid = (high + low)/2;

    printf("enter the key you want to search in array: ");
    scanf("%d", &key); 

    while(low<=high){

        if(arr[mid] == key){
            printf("the key is found at index: %d", mid);
            return 1;
        }
        else if(key > arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        mid = (high + low)/2;
    }

    printf("Key is not found in list");
    return 0;
}