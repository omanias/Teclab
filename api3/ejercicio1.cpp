#include <iostream>
#include <string>

using namespace std;

void bubbleSort(string arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    string licencias[] = {"LB2362", "VD2563", "DS7856", "GT8569", "SD4572", "WF4004", "TG4565", "BP0456", "KL4580", "DF4587"};
    int n = sizeof(licencias) / sizeof(licencias[0]);

    bubbleSort(licencias, n);

    cout << "Licencias ordenadas:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << licencias[i] << " ";
    }
    cout << endl;

    return 0;
}
