#include <iostream>

class Compteur
{
private:
    int valeur;
    int *historique;
    int taille;

public:
    Compteur(int n)
    {
        valeur = 0;
        taille = n;
        historique = new int[n];
        std::cout << "Compteur cree" << std::endl;
    }

    ~Compteur()
    {
        delete[] historique;
        std::cout << "Compteur detruit" << std::endl;
    }

    void incrementer() { valeur++; }
    int lire() const { return valeur; }
};

int main()
{
    Compteur c(100);
    c.incrementer();
    c.incrementer();
    std::cout << c.lire() << std::endl;
    return 0;
}
