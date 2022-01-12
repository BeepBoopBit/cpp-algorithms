#include <iostream>
/**
 * Linear Search algorithm works by sequentially searching a container one by one. The algorithm is as follows:
 * 1.) Let 'arr' be the container and 'i' be the first index of that container
 * 3.) while 'i' < the size of the container do 2
 * 2.) if arr[i] == 'sought' value, then return the index
 * 3.) return -1 if the value is not the element of the set
 */
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