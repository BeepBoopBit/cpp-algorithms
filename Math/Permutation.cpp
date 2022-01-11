#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

bool checkPermutation(std::vector<std::vector<int>> dataVect){
    std::vector<std::string> stringData;
    for(auto i: dataVect){
        std::string tempData;
        for(auto j: i){
            tempData += std::to_string(j) + ' ';
        }
        stringData.push_back(tempData);
    }
    bool isSame = false;
    std::ifstream iFile("./Math/dataFiles.txt");
    if(iFile.is_open()){
        std::string indivLine;
        while(std::getline(iFile, indivLine)){
            bool isThere = false;
            for(auto i: stringData){
                if(i == indivLine){
                    isThere = true;
                    break;
                }
            }
            if(!isThere){
                return false;
            }
        }
    }else{
        std::cout << "Cannot Read File" << std::endl;
        return false;
    }
    return true;
}

void print(std::vector<std::vector<int>> dataVect){
    int counter = 1;
    for(auto i: dataVect){
        std::cout << counter++ << ": ";
        for(auto j: i){
            std::cout << j;
        }
        std::cout << std::endl;
    }

}

std::vector<std::vector<int>> permutate(std::vector<int> dataVect, int startingIndex){  // can be improve
    // create a container for all the data
    std::vector<std::vector<int>> doubleVect;
    // recursively permutate through the base data
    if(startingIndex < dataVect.size()){
        std::vector<std::vector<int>> tempData = permutate(dataVect, startingIndex+1);
        std::copy(tempData.begin(), tempData.end(), std::back_inserter(doubleVect));   
    }
    // iterate through the whole data
    for(int i = startingIndex+1; i < dataVect.size(); ++i){
        // swap and push the data by 'i'
        std::vector<int> singleVect = dataVect;
        std::swap(singleVect[startingIndex], singleVect[i]);
        doubleVect.push_back(singleVect);        
        
        // recursively permutate through the data
        {
            std::vector<std::vector<int>> tempData = permutate(singleVect, startingIndex+1);
            std::copy(tempData.begin(), tempData.end(), std::back_inserter(doubleVect));   
        }
    }
    return doubleVect;
}

std::vector<std::vector<int>> permutation(std::vector<int> dataVect){ // can be improve
    // create a container that stores all the vector
    std::vector<std::vector<int>> container;
    {
        // push the data
        container.push_back(dataVect);
        // permutate the data
        std::vector<std::vector<int>> tempData = permutate(dataVect, 0);
        // copy the permutated data 
        std::copy(tempData.begin(), tempData.end(), std::back_inserter(container));
    }
    print(container);
    if(checkPermutation(container)){
        std::cout << "ALL TEST CASE PASSED\n";
    }
}

int main(){
    permutation({1,2,3,4,5});
    return 0;
}

// 1 2 3 4 // 2 1 3 4 // 3 2 1 4 // 4 2 3 1

// 1 3 2 4 // 2 3 1 4 // 3 1 2 4 // 4 3 2 1
// 1 3 4 2 // 2 3 4 1 // 3 1 4 2 // 4 3 1 2

// 1 4 3 2 // 2 4 3 1 // 3 4 1 2 // 4 1 3 2
// 1 4 2 3 // 2 4 1 3 // 3 4 2 1 // 4 1 2 3

// missing
// 1 2 4 3 // 2 1 4 3 // 3 2 4 1 // 4 2 1 3