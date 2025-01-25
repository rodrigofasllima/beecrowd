#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned int 
        X; 
        std::cin >> X;

        if (X % 2)
            X++;
        else
            X += 2;
    
    std::cout << X << '\n';

    return 0;
}
