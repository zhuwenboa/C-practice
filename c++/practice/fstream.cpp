#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

std::istream& read(std::istream& is, std::string& s)
{
    while(is >> s)
    {
     //   is >> s;
        cout << s << "\n";
    }
    return is;
}

std::ostream& print(std::ostream& os, std::string& s)
{
    os << s;
    return os;
}

int main(int argc, char* argv[])
{
    std:ifstream input(argv[1]);
    std::ofstream output(argv[2]);

    std::string s;
    read(input, s);
    std::cout << s << std::endl;
    print(output, s);
    std::string ss;
}