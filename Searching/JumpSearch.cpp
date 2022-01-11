#include <iostream>
#include <cmath>
int jumpSearch(int *arr, int size, int sought){
    int steps = std::sqrt(size);
    int startingIndex = 0;
    for(int i = 0; i < size; i+=steps){
        if(arr[i] > sought){
            startingIndex = (i-steps);
            break;
        }
    }
    for(int i = startingIndex; i < size; ++i){
        if(arr[i] == sought){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << jumpSearch(arr, 10, 1) << std::endl;
    std::cout << jumpSearch(arr, 10, 10) << std::endl;
    std::cout << jumpSearch(arr, 10, 2) << std::endl;
    std::cout << jumpSearch(arr, 10, 9) << std::endl;
    std::cout << jumpSearch(arr, 10, 3) << std::endl;
    std::cout << jumpSearch(arr, 10, 8) << std::endl;
    std::cout << jumpSearch(arr, 10, 4) << std::endl;
    std::cout << jumpSearch(arr, 10, 7) << std::endl;
    std::cout << jumpSearch(arr, 10, 5) << std::endl;
    return 0;
}