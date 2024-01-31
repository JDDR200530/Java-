#include <iostream>
#include <math.h>
using namespace std;
double calcularRaiz(double a, double b, double c) {
    return b * b - 4 * a * c;
}
void calcularRaices(double a, double b, double c) {
    double Raiz = calcularRaiz(a, b, c);

    if (Raiz  > 0) {
        double raiz1 = (-b + sqrt(Raiz)) / (2 * a);
        double raiz2 = (-b - sqrt(Raiz)) / (2 * a);
        cout<< "Dos raices reales diferentes: " << raiz1 << " y " << raiz2 << endl;
    } else if (Raiz  == 0) {
        double raiz = -b / (2 * a);
       cout<< "Una raiz real doble: " << raiz <<endl;
    } else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-Raiz) / (2 * a);
        cout << "Dos raices complejas conjugadas: " << parteReal << " + " << parteImaginaria << "i y " << parteReal << " - " << parteImaginaria << "i" << std::endl;
    }
}

int main() {
    double a, b, c;

    
    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    
    calcularRaices(a, b, c);

    return 0;
}

