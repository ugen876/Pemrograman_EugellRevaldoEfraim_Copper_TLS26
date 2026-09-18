#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int a[1000];

    for (int i = 0; i < N; i++) {
        a[i] = i + 1;
    }

    int jumlah = N;
    int pos = 0;

    while (jumlah > 1) {
        pos = (pos + K - 1) % jumlah;

        int korban = a[pos];
        cout << korban << " ";

   
        if (korban % 2 == 0)
            K += 2;
        else
            K--;

        if (K < 2)
            K = 2;

       
        for (int i = pos; i < jumlah - 1; i++)
            a[i] = a[i + 1];

        jumlah--;

        if (pos == jumlah)
            pos = 0;
    }
    cout << endl;
    cout << "sisa: " << a[0];

    return 0;
}