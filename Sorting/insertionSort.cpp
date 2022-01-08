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

int main(){
    return 0;
}