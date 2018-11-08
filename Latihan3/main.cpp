#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cout << "Masukkan nilai pertama : "; cin >> A;
    cout << "Masukkan nilai kedua : "; cin >> B;
    cout << "Masukkan nilai ketiga : "; cin >> C;

    if(A==B)
    {
        if(A==C)
            cout << "SAMA SISI" << endl;
        else
            cout << "SAMA KAKI" << endl;
    }
    else
    {
        if(A==C)
            cout << "SAMA KAKI" << endl;
        else
        {
            if(B==C)
                cout << "SAMA KAKI" << endl;
            else
                cout << "SEMBARANG" << endl;
        }
    }
    return 0;
}

