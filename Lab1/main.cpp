#include <iostream>

using namespace std;

void linie(int lf, int lin, int mij, int rt, int var = 2, int lo = 7) {

    printf("\n%c", lf);

    for (int j = 1; j <= var; j++) {

        for (int i = 1; i <= 3; i++) {
            printf("%c", lin);
        }
        printf("%c", mij);
    }

    for (int i = 1; i <= lo; i++) {
        printf("%c", lin);
    }
    printf("%c", rt);

}

int main() {
    cout << "Proiect nr. 1, elaborat de C.C.!" << endl;


    cout << "\n\t1. Complementul";

    linie(35, 61, 35, 35, 1);
    printf("\n%c A %c not A %c", 124, 124, 124);
    linie(35, 61, 35, 35, 1);
    for (int a = 0; a <= 1; a++) {
        printf("\n%c %d %c %3d %3c", 124, a, 124, !a, 124);
    }
    linie(35, 61, 35, 35, 1);


    cout << "\nt2. Conjunctia";

    linie(35, 61, 35, 35);
    printf("\n%c A %c B %cA and B%c", 124, 124, 124, 124);
    linie(35, 61, 35, 35);
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %3d %3c", 124, a, 124, b, 124, a&&b, 124);
        }
    }
    linie(35, 61, 35, 35);


    cout << "\nt3. Disjunctia";

    linie(35, 61, 35, 35);
    printf("\n%c A %c B %c A or B%c", 124, 124, 124, 124);
    linie(35, 61, 35, 35);
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %3d %3c", 124, a, 124, b, 124, a||b, 124);
        }
    }
    linie(35, 61, 35, 35);


    cout << "\nt4. Diferenta";

    linie(35, 61, 35, 35);
    printf("\n%c A %c B %cA dif B%c", 124, 124, 124, 124);
    linie(35, 61, 35, 35);
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %3d %3c", 124, a, 124, b, 124, a && !b, 124);
        }
    }
    linie(35, 61, 35, 35);


    cout << "\nt6. XOR";
    linie(35, 61, 35, 35);
    printf("\n%c A %c B %cA XOR B%c", 124, 124, 124, 124);
    linie(35, 61, 35, 35);
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %3d %3c", 124, a, 124, b, 124, a ^ b, 124);
        }
    }
    linie(35, 61, 35, 35);


    cout << "\nt6. Implicatia";
    linie(35, 61, 35, 35);
    printf("\n%c A %c B %c A -> B%c", 124, 124, 124, 124);
    linie(35, 61, 35, 35);
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %3d %3c", 124, a, 124, b, 124, !a || b, 124);
        }
    }
    linie(35, 61, 35, 35);


    cout << "\nt7. Echivalenta";
    linie(35, 61, 35, 35);
    printf("\n%c A %c B %c A = B %c", 124, 124, 124, 124);
    linie(35, 61, 35, 35);
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("\n%c %d %c %d %c %3d %3c", 124, a, 124, b, 124, a == b, 124);
        }
    }
    linie(35, 61, 35, 35);


    cout << "\nt8. Problema cu 3 variabile";
    linie(35, 61, 35, 35, 3, 12);
    printf("\n%c A %c B %c C %cA AND B OR C%c", 124, 124, 124, 124, 124);
    linie(35, 61, 35, 35, 3, 12);
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            for (int c = 0; c <= 1; c++) {
                printf("\n%c %d %c %d %c %d %c %6d %5c", 124, a, 124, b, 124, c, 124, a && b || c, 124);
            }
        }
    }
    linie(35, 61, 35, 35, 3, 12);



    //Profesorul poate duce o lectie SAU un elev SI un assistent pot duce o lectie

    cout << "\nt9. Promblema de logica";
    linie(35, 61, 35, 35, 3, 12);
    printf("\n%c P %c S %c A %cP sau S si A%c", 124, 124, 124, 124, 124);
    linie(35, 61, 35, 35, 3, 12);
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            for (int c = 0; c <= 1; c++) {
                printf("\n%c %d %c %d %c %d %c %6d %5c", 124, a, 124, b, 124, c, 124, a || b && c, 124);
            }
        }
    }
    linie(35, 61, 35, 35, 3, 12);

    return 0;
}