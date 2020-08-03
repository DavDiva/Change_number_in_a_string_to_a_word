#include <iostream>
#include <string>
#include <cstddef> //size_t is an unsigned integral type (the same as member type string::size_type)
using namespace std;

void show_str(const string &str)
{
    cout << str << endl;
}

void change_num(string& str)
{
    size_t found = str.find_first_of("0123456789");
    while (found != string::npos)
    {
        if (str[found] == '1' && str[found + 1] == '0')
        {
            str.replace(found, 2, "ten");
        }
        switch (str[found])
        {
        case '0': str.replace(found, 1, "zero");
            break;
        case '1': str.replace(found, 1, "one");
            break;
        case '2': str.replace(found, 1, "two");
            break;
        case '3': str.replace(found, 1, "three");
            break;
        case '4': str.replace(found, 1, "four");
            break;
        case '5': str.replace(found, 1, "five");
            break;
        case '6': str.replace(found, 1, "six");
            break;
        case '7': str.replace(found, 1, "seven");
            break;
        case '8': str.replace(found, 1, "eight");
            break;
        case '9': str.replace(found, 1, "nine");
            break;
        }
        
        found = str.find_first_of("0123456789", found + 1);
    }

}

int main()
{
    string str;
    getline(cin,str);
    change_num(str);
    show_str(str);
   

    return 0;
}

 

