#include <iostream>


void insertionSort(int *arr, const int size){
    // Iterate through the array
    for(int i = 1; i < size; ++i){
        // create a temporary variable to hold the current index
        int tempI = i;
        // iterate through the array in decreasing manner
        for(int j = i; j != -1; --j){
            // if the 'j' value is greater than the current 'i' then swapped it and change 'i';
            if(arr[j] > arr[i]){
                std::swap(arr[j], arr[i]);
                --i;
            }
        }
        i = tempI;
    }
    // array is sorted from right to left
}

void recursionInsertionSort(int *arr, const int size, int tempI = 1){ // can be more optimized
    // base case
    if(tempI == size){
        return;
    }
    // iterate through the array in decreasing manner
    for(int i = tempI; i >= 0; --i){
        // if the 'j' value is greater than the current 'i' then swapped it and change 'i';
        if(arr[i-1] > arr[i]){
            std::swap(arr[i-1], arr[i]);
        }
    }
    recursionInsertionSort(arr, size, ++tempI);
}

void recursionInsertionSort00(int *arr, const int size){
    if(size == 1){
        return;
    }
    recursionInsertionSort00(arr, size-1);
    for(int i = size; i == 0; --i){
        if(arr[i] < arr[i-1]){
            std::swap(arr[i], arr[i-1]);
        }
    }
}

int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
    recursionInsertionSort00(arr,11);
    for(auto i: arr){
        std::cout << i << ' ';
    }

    return 0;
}