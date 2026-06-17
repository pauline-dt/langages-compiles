#include <iostream>
#include <string>

class Etudiant
{
private:
    std::string nom;
    int age;
    double moyenne;

public:
    Etudiant()
    {
        nom = "";
        age = 0;
        moyenne = 0;
    }

    Etudiant(std::string n, int a, double m)
    {
        nom = n;
        age = a;
        moyenne = m;
    }

    void ajouterNote(double note)
    {
        moyenne = (moyenne + note) / 2;
    }

    bool estMajeur() const
    {
        return age >= 18;
    }

    void afficher() const
    {
        std::cout << "Nom : " << nom << std::endl;
        std::cout << "Age : " << age << std::endl;
        std::cout << "Moyenne : " << moyenne << std::endl;

        if (estMajeur())
            std::cout << "Etudiant majeur" << std::endl;
        else
            std::cout << "Etudiant mineur" << std::endl;
    }

    std::string getNom() const { return nom; }
    double getMoyenne() const { return moyenne; }
};

int main()
{
    Etudiant etudiants[5];

    for (int i = 0; i < 5; i++)
    {
        std::string nom;
        int age;
        double moyenne;

        std::cout << "\nEtudiant " << i + 1 << std::endl;
        std::cout << "Nom : ";
        std::cin >> nom;
        std::cout << "Age : ";
        std::cin >> age;
        std::cout << "Moyenne : ";
        std::cin >> moyenne;

        etudiants[i] = Etudiant(nom, age, moyenne);
    }

    double somme = 0;
    int meilleur = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "\n";
        etudiants[i].afficher();
        somme = somme + etudiants[i].getMoyenne();

        if (etudiants[i].getMoyenne() > etudiants[meilleur].getMoyenne())
            meilleur = i;
    }

    std::cout << "\nMoyenne de la promotion : " << somme / 5 << std::endl;
    std::cout << "Meilleur etudiant : " << etudiants[meilleur].getNom()
              << " avec " << etudiants[meilleur].getMoyenne() << std::endl;
    return 0;
}
