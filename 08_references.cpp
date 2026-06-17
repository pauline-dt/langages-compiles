#include <iostream>

void echanger(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 20;
    std::cout << "Avant : x=" << x << ", y=" << y << std::endl;
    echanger(x, y);
    std::cout << "Apres : x=" << x << ", y=" << y << std::endl;
    return 0;
}
