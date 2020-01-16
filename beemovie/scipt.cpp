#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, int> words;


int main()
{
    std::ifstream file("script");

    std::string word;

    while (file >> word)
    {
        if(word != "." && word != " " && word != "a" && word != "-")
        {
            words[word]++;
        }
    }

    int max = 0;
    std::string common = "";
    for(auto x : words)
    {
        if (x.second > max)
        {
            max = x.second;
            common = x.first;
        }

    } 

    std::cout << "Most common word is " << common << "\nIt occured " << max 
              << " times.\n"; 

    return 0;
}