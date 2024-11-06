#include <stdio.h>
#include <math.h>
// Explication du Code
// Inclusions : On inclut les bibliothèques nécessaires (stdio.h pour les entrées/sorties et math.h pour les calculs mathématiques).

// Fonction EstTriangleRectangle :

// Prend trois longueurs en entrée.
// Identifie la plus grande longueur comme l'hypoténuse.
// Vérifie la relation de Pythagore.
// Retourne 1 (Vrai) si les longueurs peuvent former un triangle rectangle et 0 (Faux) sinon.
// Fonction main :

// Lit les longueurs des côtés depuis l'utilisateur.
// Appelle la fonction EstTriangleRectangle pour effectuer la vérification.
// Affiche le résultat.

// Fonction pour vérifier si les longueurs peuvent former un triangle rectangle
#include <stdio.h>
#include <math.h>

int estTriangleRectangle(double a, double b, double c) {
    double hypoténuse, cote1, cote2;

    // Identifier l'hypoténuse et les autres côtés
    if (a >= b && a >= c) {
        hypoténuse = a;
        cote1 = b;
        cote2 = c;
    }
    else if (b >= a && b >= c) {
        hypoténuse = b;
        cote1 = a;
        cote2 = c;
    }
    else {
        hypoténuse = c;
        cote1 = a;
        cote2 = b;
    }

    // Vérifier la relation de Pythagore
    if (hypoténuse * hypoténuse == cote1 * cote1 + cote2 * cote2) {
        return 1; // Vrai
    }
    else {
        return 0; // Faux
    }
}

int main() {
    double a, b, c;

    // Lire les longueurs des côtés
    printf("Entrez la longueur du cote a : ");
    scanf("%lf", &a);
    printf("Entrez la longueur du cote b : ");
    scanf("%lf", &b);
    printf("Entrez la longueur du cote c : ");
    scanf("%lf", &c);

    // Vérifier si les longueurs peuvent former un triangle rectangle
    if (estTriangleRectangle(a, b, c)) {
        printf("Les longueurs peuvent former un triangle rectangle.\n");
    }
    else {
        printf("Les longueurs ne peuvent pas former un triangle rectangle.\n");
    }

    return 0;
}
