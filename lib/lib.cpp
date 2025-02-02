#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>

std::string sortAndReplace(std::string s)
{
    std::sort(s.rbegin(), s.rend());
    std::string newString;
    for(char c : s)
        if(c % 2 == 0)
            newString += "KB";
        else
            newString += c;
    return newString;
}

int digitSum(const std::string &s)
{
    return std::accumulate(s.begin(), s.end(), 0, [](const int& sum, const char& c){
        return sum + (::isdigit(c) ? (c - '0') : 0);
    });
}

void handle(std::string data)
{
    if (data.length() >= 2 && std::stoi(data) % 32 == 0) {
        std::cout << "RecievedData: " << data << std::endl;
    } else {
        std::cout << "Error: Incorrect Data" << std::endl;
    }
}