#include <iostream>
#include <string>

int main()
{
    std::string nom;
    std::string prenom;
    int age;
    double moyenne;

    std::cout << "Nom : ";
    std::cin >> nom;
    std::cout << "Prenom : ";
    std::cin >> prenom;
    std::cout << "Age : ";
    std::cin >> age;
    std::cout << "Moyenne : ";
    std::cin >> moyenne;

    std::cout << "\nFiche etudiant" << std::endl;
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Prenom : " << prenom << std::endl;
    std::cout << "Age : " << age << std::endl;
    std::cout << "Moyenne : " << moyenne << std::endl;
    return 0;
}
