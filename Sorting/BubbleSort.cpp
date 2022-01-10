#include <iostream>

void bubbleSort_00(int *arr, int size){
    // iterate through the array
    for(int i = 0; i < size; ++i){
        // since we know that the end of the array after each iteration is sorted
        // then "size-i-1"
        for(int j = 0; j < size-i-1; ++j){
            // swap the value if arr[j] is greater than arr[j+1]
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
    // the array is sorted from right to left
}
void recursiveBubbleSort(int arr[], int n){
    // if the size is now '1' then return
    if (n == 1){
        return;
    }
    // iterate through array
    for (int i=0; i<n-1; i++){
        // sort one element 
        if (arr[i] > arr[i+1]){
            std::swap(arr[i], arr[i+1]);
        }
    }
    // call the function again to sort for the next element
    // since we know that after each iteration, the last element in the array is sorted
    // then "n-1" (make this the base condition)
    recursiveBubbleSort(arr, n-1);
    // the array is sorted from right to left
}

void bubbleSort_01(int *arr, int size){
    // iterate through the array
    for(int i = 0; i < size; ++i){
        // assume that it is not swapped
        bool isSwapped = false;
        for(int j = 0; j < size-i-1; ++j){
            // if it's not sorted, then swap and make 'isSwapped' True
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }
        // if nothing is swapped, then it's sorted. Break the loop
        if(!isSwapped){
            break;
        }
    }
    // the array is sorted from right to left
}

int main(){
    return 0;
}