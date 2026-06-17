#include <iostream>
#include <string>

int main()
{
    std::string nom;
    int age;

    std::cout << "Quel est ton nom ? ";
    std::cin >> nom;
    std::cout << "Quel age as-tu ? ";
    std::cin >> age;

    std::cout << "Bonjour " << nom << " !" << std::endl;
    std::cout << "Tu as " << age << " ans." << std::endl;
    return 0;
}
