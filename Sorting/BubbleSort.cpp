#include <iostream>

void bubbleSort_00(int *arr, int size){
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size-i-1; ++j){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}
void recursiveBubbleSort(int arr[], int n){
    if (n == 1){
        return;
    }
    for (int i=0; i<n-1; i++){
        if (arr[i] > arr[i+1]){
            std::swap(arr[i], arr[i+1]);
        }
    }
    recursiveBubbleSort(arr, n-1);
}

void bubbleSort_01(int *arr, int size){
    for(int i = 0; i < size; ++i){
        bool isSwapped = false;
        for(int j = 0; j < size-i-1; ++j){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }
        if(!isSwapped){
            break;
        }
    }
}

int main(){
    return 0;
}