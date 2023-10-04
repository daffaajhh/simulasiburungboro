#include <bits/stdc++.h>
using namespace std;
// rumus waktu=2(v*sin(s))/10
int main()
{
    cout << "Menghitung waktu yang diperlukan Boro untuk mencapai jarak horizontal terjauh\n";
    cout << "=============================================================================\n";
    float v, s, waktu = 0, selisih;
    cout << "Masukkan sudut penerbangan burung : ";
    cin >> s;
    cout << endl;
    cout << "Masukkan kecepatan burung : ";
    cin >> v;
    cout << endl;
    float sinA = sin(s * 22 / 7 / 180);
    waktu = (2 * (v * sinA)) / 10;
    cout << "Waktu yang diperlukan adalah : " << waktu;
}
