#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void swap(vector<pair<string, string>> &pacientes, int i, int j)
{
    pair<string, string> temp = pacientes[i];
    pacientes[i] = pacientes[j];
    pacientes[j] = temp;
}

void bubbleSort(vector<pair<string, string>> &pacientes)
{
    int n = pacientes.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (pacientes[j].second > pacientes[j + 1].second)
            {
                swap(pacientes, j, j + 1);
            }
        }
    }
}

int main()
{
    vector<pair<string, string>> pacientes;

    for (int i = 0; i < 20; ++i)
    {
        string primerNombre, apellidoPaterno;

        cout << "Ingrese el primer nombre del paciente " << i + 1 << ": ";
        cin >> primerNombre;

        cout << "Ingrese el apellido paterno del paciente " << i + 1 << ": ";
        cin >> apellidoPaterno;

        pacientes.push_back(make_pair(primerNombre, apellidoPaterno));
    }

    bubbleSort(pacientes);

    cout << "\nNombres de los pacientes:\n";
    for (const auto &paciente : pacientes)
    {
        cout << paciente.first << " " << paciente.second << endl;
    }

    return 0;
}
