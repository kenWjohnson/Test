#include <iostream>
#include <vector>
#include <string>

int main(int argc, char const *argv[])
{
    std::vector<std::string> msg {"Hello", "C++", "World", "from", "VS Code!", "and the C++ extension!"};
    for (const std::string& word : msg)
    {
        std::cout << word << " ";
    }
    return 0;
}