# Praktikum_3


# Latihan 1 (Menampilkan bilangan terbesar dari sejumlah bilangan acak yang diinputkan)
```
-Mendeklarasikan variable int i=0; int max=0; int a,x; sebagai variable input
-Memasukkan jumlah bilangan
-Menentukan bilangan yang terbesar dengan rumus for (i;i<a;i++)
-Menampilkan hasil kelayar dengan kode:
for (i;i<a;i++)
    {
        cout << "Masukkan bilangan ke-" << i+1 << ": ";
        cin >> x;

        if (x > max)
        max=x;
    }
-Berikut kode lengkapnya:

#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int max=0;
    int a,x;

    cout << "Masukkan jumlah bilangan; ";
    cin >> a;

    for (i;i<a;i++)
    {
        cout << "Masukkan bilangan ke-" << i+1 << ": ";
        cin >> x;

        if (x > max)
        max=x;
    }

    cout << "Bilangan terbesar adalah: " << max << endl;

    return 0;
}
```
-Berikut ScreenShotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum-3/blob/master/Latihan1.png)

# Latihan 2 (Menampilkan urutan bilangan dari yang terkecil sampai yang terbesar)
```
-Mendeklarasikan variable int a, b, c, sebagai variable input
-Memasukkan nilai A, B, C,
-Menentuka bilangan yang terbesar dengan rumus if (a<c and a<c)
-Menampilkan hasil kelayar dengan kode:
if(a<c and a<c){
        if(b<c){
            cout << a << ' ' << b << ' ' << c << endl;
        }else{
            cout << a << ' ' << c << ' ' << b << endl;
        }
    }else if(b<a and b<c){
        if(a<c){
            cout << b << ' ' << a << ' ' << c << endl;
    }else{
            cout << b << ' ' << c << ' ' << a << endl;
    }
    }else{
        if (b<a){
            cout << c << ' ' << b << ' ' << a << endl;
        }else{
            cout << c << ' ' << a << ' ' << b << endl;
        }
        }
    return 0;
}

-Berikut kode lengkapnya:

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Masukkan nilai A : "; cin >> a;
    cout << "Masukkan nilai B : "; cin >> b;
    cout << "Masukkan nilai C : "; cin >> c;

    if(a<c and a<c){
        if(b<c){
            cout << a << ' ' << b << ' ' << c << endl;
        }else{
            cout << a << ' ' << c << ' ' << b << endl;
        }
    }else if(b<a and b<c){
        if(a<c){
            cout << b << ' ' << a << ' ' << c << endl;
    }else{
            cout << b << ' ' << c << ' ' << a << endl;
    }
    }else{
        if (b<a){
            cout << c << ' ' << b << ' ' << a << endl;
        }else{
            cout << c << ' ' << a << ' ' << b << endl;
        }
        }
    return 0;
}
```
-Berikut ScreenShotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum-3/blob/master/Latihan2.png)

# Latihan 3 (Menginput 3 buah bilangan yang masing-masing menyatakan panjang sisi segitiga)
```
-Mendeklarasikan variable int A,B,C; sebagai variable input
-Memasukkan nilai A,B,C;
-Menentukan bilangan yang terbesar dengan rumus if(A==B)
-Menampilkan hasil kelayar dengan kode:
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

-Berikut kode lengkapnya:

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
```
-Berikut ScreenShotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum-3/blob/master/Latihan3.png)



