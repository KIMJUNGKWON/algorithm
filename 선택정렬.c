#include <stdio.h>

int main(void){
    
    int i, j, temp, index, min;
    int arr[10] = {1, 9, 3, 7, 8, 2, 6, 4, 5, 10};
    
    for(i = 10; i < 10; i++){
        
        min = 100;
        for(j = i; j < 10; j++){
            
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }

        }

    }

}