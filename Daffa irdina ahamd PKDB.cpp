#include <bits/stdc++.h>
using namespace std;
// tinggimax=v^2*sin^2s/20
int main()
{
    cout << "Prediksi Ketinggian Dicapai Boro\n";
    cout << "================================\n";
    float s, v, t;
    int status = 0; 
    cout << "Masukkan sudut penerbangan burung : ";
    cin >> s;
    cout << endl;
    cout << "Masukkan kecepatan burung : ";
    cin >> v;
    cout << endl;
    cout << "Masukkan tinggi pohon burung : ";
    cin >> t;
    cout << endl;
    float sinA = sin(s * 22 / 7 / 180);
    float hasil = ((pow(v, 2)) * (pow(sinA, 2))) / 20;
    if (t <= hasil)
    {
        status++;
        cout << "Status : " << status << endl
             << "Ketinggian : " << hasil;
    }
    else
    {
        cout << "Status : " << status << endl
             << "Ketinggian : " << hasil;
    }
}

