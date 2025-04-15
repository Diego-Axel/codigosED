#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool temColisao(double xa, double ya, double ra, double xb, double yb, double rb) {
    double distancia = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    return distancia <= (ra + rb);
}

int main() {
    if (temColisao(0, 0, 2, 3, 0, 2))
        printf("Colisão detectada.\n");
    else
        printf("Sem colisão.\n");

    if (temColisao(0, 0, 1, 5, 0, 1))
        printf("Colisão detectada.\n");
    else
        printf("Sem colisão.\n");
        
    return 0;
}
