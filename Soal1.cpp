#include <iostream>
using namespace std;

int main()
{
    int arr[2][3][4];

    int ganjil = 1;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            arr[0][j][k] = ganjil;
            ganjil += 2;
        }
    }

    int lima = 5;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            arr[1][j][k] = lima;
            lima += 5;
        }
    }

    cout << "Rata-Rata lapis 1 dan 2:\n";
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            int hasil = (arr[0][j][k] + arr[1][j][k]) / 2;
            cout << hasil << "\t";
        }
        cout << "\n";
    }

    return 0;
}