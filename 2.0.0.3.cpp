#include <iostream>

int main()
{
    int a,b,s;
    std::cout<< "Podaj liczbę początkową: ";
    std::cin>>a;
    std::cout<< "Podaj liczbę maksymalną: ";
    std::cin>>b;
    std::cout<< "Podaj liczbę na której zakończyć: ";
    std::cin>>s;
    if (s==0)
    {
        std::cout<< " s nie może byc zerem\n";
    }
    else if (b<a)
    {
        std::cout << " b nie może być mniejsze od a\n";
    }
    else if (s<0)
    
    {
        s*=-1;
        if(s>b)
        {
            std::cout<<" s nie może być większe od b";
        }    
        while (s>=a && s<b)
        {
            std::cout<< a << "\n";
            ++a;
        }
    }
    else
    {
        while (s>=a && s<b)
        {
            std::cout<< a << "\n";
            ++a;
        }
    }
    return 0;
}


