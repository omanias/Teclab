#include <iostream>

using namespace std;

int main()
{
    int figura;
    double a, b, c, d;

    cout << "Ingrese la figura: " << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Triangulo" << endl;

    cin >> figura;

    cout << "la figura seleccionada es: " << figura << endl;

    switch (figura)
    {
    case 1:
        cout << "Ingrese la medida del lado A: ";
        cin >> a;
        cout << "Ingrese la medida del lado B: ";
        cin >> b;
        cout << "Ingrese la medida del lado C: ";
        cin >> c;
        cout << "Ingrese la medida del lado D: ";
        cin >> d;
        cout << "El perimetro de tu figura es: " << a + b + c + d << endl;
        break;

    case 2:
        cout << "Ingrese la medida del lado A: ";
        cin >> a;
        cout << "Ingrese la medida del lado B: ";
        cin >> b;
        cout << "Ingrese la medida del lado C: ";
        cin >> c;
        cout << "Ingrese la medida del lado D: ";
        cin >> d;
        cout << "El perimetro de tu figura es: " << a + b + c + d << endl;
        break;

    default:
        cout << "Ingrese la medida del lado A: ";
        cin >> a;
        cout << "Ingrese la medida del lado B: ";
        cin >> b;
        cout << "Ingrese la medida del lado C: ";
        cin >> c;
        cout << "El perimetro de tu figura es: " << a + b + c << endl;
        break;
    }

    return 0;
}
