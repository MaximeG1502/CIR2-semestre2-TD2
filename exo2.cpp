#include <iostream>
#include <cmath>
#include <array>

bool est_premier(int n) {
    if (n <= 1) {
        return false;
    }

    int limite = static_cast<int>(sqrt(n)) + 1;
    int i = 2;

    while (i < limite) {
        if (n % i == 0) {
            return false;
        }
        ++i;
    }

    return true;
}

void premiers_inferieurs(const int limite) {
    const int taille_tab = 1000;
    std::array<int, taille_tab> tabPremiers{};
    int indice = 0;

    std::cout << "Liste des nombres premiers inférieurs à " << limite << std::endl;

    for (int nombre = 2; nombre < limite; ++nombre) {
        if (est_premier(nombre)) {
            std::cout << nombre << std::endl;
            tabPremiers[indice++] = nombre;

            if (indice == taille_tab) {
                std::cout << "Tableau des premiers complets (taille maximale atteinte)." << std::endl;
                break;
            }
        }
    }

    std::cout << "Tableau des premiers : [";
    for (int i = 0; i < indice; ++i) {
        std::cout << tabPremiers[i];
        if (i < indice - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    const int n = 100;
    //est_premier(n);
    premiers_inferieurs(n);

    return 0;
}
