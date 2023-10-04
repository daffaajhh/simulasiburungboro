#include <bits/stdc++.h>
using namespace std;
// tinggimax=v^2*sin^2s/20
float hasil[1000];
float SinA[1000];

int main()
{
    float s[1000];
    float v[1000];
    float t[1000];
    float jumlahperulangan;
    int status = 0;
    cout << "Prediksi Ketinggian Dicapai Boro dan Teman-temannya\n";
    cout << "===================================================\n";
    cout << "Masukkan jumlah burung : ";
    cin >> jumlahperulangan;
    cout << endl;
    for (int i = 1; i <= jumlahperulangan; i++)
    {
        cout << "Masukkan sudut penerbangan burung ke-" << i << " : ";
        cin >> s[i];
        cout << endl;
        cout << "Masukkan kecepatan burung ke-" << i << " : ";
        cin >> v[i];
        cout << endl;
        cout << "Masukkan tinggi pohon burung ke-" << i << " : ";
        cin >> t[i];
        cout << endl;
    }

    for (int i = 1; i <= jumlahperulangan; i++)
    {
        float temps = s[i];
        float tempv = v[i];
        SinA[i] = sin(temps * 22 / 7 / 180);
        float tempsin = SinA[i];
        hasil[i] = ((pow(tempv, 2)) * (pow(tempsin, 2))) / 20;
    }

    for (int i = 1; i <= jumlahperulangan; i++)
    {
        status = 0;
        if (t[i] <= hasil[i])
        {
            status++;
            cout << "Status Burung " << i << " : " << status << endl;
            cout << "Ketinggian : " << hasil[i] << endl;
        }
        else
        {
            cout << "Status Burung " << i << " : " << status << endl;
            cout << "Ketinggian : " << hasil[i] << endl;
        }
    }
}
