#include <iostream>
// in-progress
void MergeSort(int *arr, int size){
    for(int i = 0; i < size-1; i+=2){
        if(arr[i] > arr[i+1]){
            std::swap(arr[i], arr[i+1]);
        }
    }
}


int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    MergeSort(arr, 10);
    for(auto i: arr){
        std::cout << i << ' ';
    }
    return 0;
}



// 10 9 8 7 6 5 4 3 2 1
// (9, 10) (7, 8) (5, 6) (3, 4) (1 2)

/**
 * 1.) Split the array into sections and sort them 
 * 2.) 
 * 
 */