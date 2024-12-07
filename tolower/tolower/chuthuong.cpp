#include <iostream>
#include <ctype.h>


void usefunc(std::string &w) {
    for (int i = 0; i <= w.size(); i++) {
        if (w[i] >= 'a' && w[i] <= 'z') w[i] = toupper(w[i]);
        else w[i] = tolower(w[i]);
    }
    
}

void convert(std::string &w) {
    for (int i = 0; i <= w.size(); i++) {
        if (w[i] >= 'a' && w[i] <= 'z') w[i] -= 32;
        else w[i] += 32;
    }
}


    int main()
{
    std::string s;
    std::cin >> s;

//   usefunc(s);
    
    convert(s);

    std::cout << s;

}