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

void recursiveInsertionSort(int *arr, const int size, int tempI = 1){ // can be more optimized
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