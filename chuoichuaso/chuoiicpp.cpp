#include <iostream>
#include <string>
std::string s;
std::string temp;

std::string right(std::string s, int i) {
    int j = i + 1;
    if (s[j] != ' ') return s;
    while (s[j] == ' ') {
        j++;
    }
    s.erase(s.begin() + i + 1, s.begin() + j);
    return s;
}


std::string left(std::string s, int& i) {
    int j = i - 1;
    if (s[j] != ' ') return s;
    while (s[j] == ' ') {
        j--;
    }
    s.erase(s.begin() + j + 1, s.begin() + i);
    return s;
}



int main()
{

    getline(std::cin, s);
    temp = s;
    
    int i = 0;
    while (i <= s.size() - 1) {
        if (s[i] == '.') {
            s = right(s, i);
//            std::cout << s << '\n';
            s = left(s, i);
        }
        i++;
    }
    
//    std::cout << s;

    for (int i = 0; i < s.size() - 1; i++) if (s[i] == '.') s.insert(s.begin() + i + 1, ' ');

    std::cout << temp << '\n' << s;

}
