#include <iostream>

void selectionSort(int *arr, int size){
    // iterate through the whole array
    for(int i = 0; i < size; ++i){
        // initialize the lowest to the current 'arr' value
        int *lowest = &(arr[i]);
        // iterate through the array
        for(int j = i+1; j < size; ++j){
            // find the lowest, if you find one, change point the 'lowest' to that address
            if(arr[j] < *lowest){
                lowest = &(arr[j]);
            }
        }
        // swapped the 'lowest' to the current 'arr' value;
        std::swap((*lowest),arr[i]);
    }
}

int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
    selectionSort(arr, 11);
    for(auto i: arr){
        std::cout << i << ' ';
    }
    return 0;
}