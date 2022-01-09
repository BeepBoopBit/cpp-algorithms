#include <iostream>

void selectionSort(int *arr, int size){
    for(int i = 0; i < size; ++i){
        int *lowest = &(arr[i]);
        for(int j = i+1; j < size; ++j){
            if(arr[j] < *lowest){
                lowest = &(arr[j]);
            }
        }
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