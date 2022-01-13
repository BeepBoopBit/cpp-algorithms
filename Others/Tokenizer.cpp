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

std::vector<std::string> tokenizeString(std::string str, std::string delim){ // 
    std::string indivStr;
    std::vector<std::string> strData;
    for(int i = 0; i < str.length(); ++i){
        auto index = str.find(delim,i);
        if(index != std::string::npos){
            std::string subStr = str.substr(i,index-i);
            strData.push_back(subStr);
            i+=(delim.length()+subStr.size())-1;
        }else{
            strData.push_back(str.substr(i));
            break;
        }
    }
    return strData;
}


int main(){
    for(auto i: tokenizeString("papayawatermelonpapayawatermelonpapaya", "watermelon")){
        std::cout << i << '-';
    }
    std::cout << '\n';
    return 0;
}