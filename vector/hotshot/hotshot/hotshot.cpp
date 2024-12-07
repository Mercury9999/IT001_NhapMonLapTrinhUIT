#include <iostream>
#include <vector>
int n;
std::vector<int> g1;

void inp1(std::vector<int> g) {
    //output with &x
    for (int& x : g) std::cout << x << " ";
    std::cout << '\n';
}

void inp2(std::vector<int> g) {
    //output using iterator
    std::vector<int>::iterator i;
    for (i = g1.begin(); i != g1.end(); i++)
        std::cout << *i << " ";
    std::cout << '\n';
    // for (auto i = g1.begin(); i != g1.end(); i++)...

}

void inp3(std::vector<int> g) {
    // output like an array
    for (int j = 0; j < n; j++) std::cout << g1[j] << " ";
    std::cout << '\n';
}

int main()
{
    std::cin >> n;
    for (int i = 0; i < n; i++) g1.push_back(i);
//    inp1;
//    inp2;
//    inp3;

}