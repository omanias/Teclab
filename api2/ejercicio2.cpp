
#include <iostream>

using namespace std;

int main()
{
    char continuar;

    do
    {
        double a, b, c;

        cout << "Ingrese la medida del lado a: ";
        cin >> a;
        cout << "Ingrese la medida del lado b: ";
        cin >> b;
        cout << "Ingrese la medida del lado c: ";
        cin >> c;

        if (a != b && b != c && a != c)
        {
            cout << "El triángulo es escaleno." << endl;
        }
        else
        {
            cout << "El triángulo no es escaleno." << endl;
        }

        cout << "¿Desea calcular otro triángulo? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}