#include <iostream>
#include <vector>
#include <numeric>
void sieveOfEratosthenes(int size){ // working but can be improve
    std::vector<int> dataVect(size);
    // populate the vector from 1 to size
    std::iota(dataVect.begin(), dataVect.end(), 2);
    // iterate through the whole vector
    for(int i = 1; i < size; ++i){
        if(dataVect[i] == 0){
            continue;
        }
        // make all none prime be '0'
        for(int j = i+dataVect[i]; j < size; j+=dataVect[i]){
            dataVect[j] = 0;
        }
        if(dataVect[i] != 0){
            std::cout << dataVect[i] << ' ';
        }
    }
}

int main(){
    sieveOfEratosthenes(100);
    return 0;
}