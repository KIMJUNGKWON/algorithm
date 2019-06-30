#include <stdio.h>

int main(void){
    
    int i, j, temp;
    int arr[10] = {5, 6, 4, 8, 2, 1, 9, 7, 3, 10};

    for(i = 1; i < 10; i++){
        for(j = i; j > 0; j--){
            if(arr[j - 1] > arr[j]){
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}