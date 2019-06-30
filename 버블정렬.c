#include <stdio.h>

int main(void){
    
    int i, j, temp;
    int arr[10] = {5, 9, 1, 7, 3, 6, 8, 2, 4, 10};
    
    for(i = 0; i < 9; i++){

        for(j = 0; j < 9 - i; j++){

            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }

    }

    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}