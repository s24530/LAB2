#include <iostream>

int main()
{
    int a,b;
    std::cout<< "Podaj a: ";
    std::cin>>a;
    std::cout<< "Podaj b: ";
    std::cin>>b;
    for (int i=a; i<b; i++)
    {
        std::cout<< i << "\n";
    }
    return 0;
}
