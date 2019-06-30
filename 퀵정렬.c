#include <stdio.h>

int arr[10] = {5, 9, 1, 7, 3, 6, 8, 4, 2, 10};

void quickSort(int* arr, int start, int end){
    
    if(start >= end){
        return;
    }

    int key = start;
    int left = start + 1;
    int right = end;
    int temp;

    // 엇갈리면 종료
    while(left <= right){

        // key보다 큰 것을 찾아서 left 값 설정
        while(arr[key] > arr[left]){
            left++;
        }

        // key보다 작은 것을 찾아서 right 값을 고정
        while(arr[key] < arr[right] && right >= left){
            right--;
        }

        // 엇갈린 경우
        if(left > right){
            temp = arr[right];
            arr[right] = arr[key];
            arr[key] = temp;
        }
        // 엇갈리지 않지만 left, right 모두 인덱싱이 끝난 경우
        else{
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }

        quickSort(arr, start, right - 1);
        quickSort(arr, right + 1, end);

    }

}

int main(void){
    
    quickSort(arr, 0, 9);
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}