#include <iostream>


void insertionSort(int *arr, const int size){
    for(int i = 1; i < size; ++i){
        int tempI = i;
        for(int j = i; j != -1; --j){
            if(arr[j] > arr[i]){
                std::swap(arr[j], arr[i]);
                --i;
            }
        }
        i = tempI;
    }
}

void recursiveInsertionSort(int *arr, const int size, int tempI = 1){ // can be more optimized
    if(tempI == size){
        return;
    }
    for(int i = tempI; i >= 0; --i){
        if(arr[i-1] > arr[i]){
            std::swap(arr[i-1], arr[i]);
        }
    }
    recursiveInsertionSort(arr, size, ++tempI);
}

int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
    recursiveInsertionSort(arr,11);
    for(auto i: arr){
        std::cout << i << ' ';
    }

    return 0;
}