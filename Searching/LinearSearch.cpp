#include <iostream>

int LinearSearch(int *arr, int size, int sought){
    for(int i = 0; i < size; ++i){
        if(arr[i] == sought){
            return i;
        }
    }
    return -1;
}

int main(){
    return 0;
}