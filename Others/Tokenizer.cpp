#include <iostream>
#include <sstream>
#include <vector>

std::vector<std::string> tokenizeString(std::string str, char delim){ // using sstream
    std::stringstream ss(str);
    std::string indivStr;
    std::vector<std::string> strData;
    while(std::getline(ss, indivStr, delim)){
        strData.push_back(indivStr);
    }
    return strData;
}

int main(){
    for(auto i: tokenizeString("water;melon;papaya;banana water;melon;papaya;banana", ';')){
        std::cout << i << '-';
    }
    std::cout << '\n';
    return 0;
}