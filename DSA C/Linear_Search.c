#include<stdio.h>

int main(){

    int no_of_elements;
    int element;
    int flag = 0;

    printf("Enter no of elements in an array: ");
    scanf("%d",&no_of_elements);

    int num_array[no_of_elements];

    for(int i = 0 ; i< no_of_elements ; i++){
        printf("Enter an element for %d position in array: ",i+1);
        scanf("%d",&num_array[i]);
    }

    printf("\nEnter the value you want to search in list: ");
    scanf("%d", &element);

    for(int i = 0 ; i< no_of_elements ; i++){
        if(element  == num_array[i]){
            flag = 1;
            element = i;
        }
    }

    if(flag == 1){
         printf("Element found at index %d",element);
        }
    else{
         printf("Element not found");
        }

}
