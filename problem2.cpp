#include <iostream>
using namespace std;

int main() {
    string pesan;

    cin >> pesan;

    int sebelumnya = 0;

    for (int i = 0; i < pesan.size(); i++) {
        int huruf = pesan[i] - 'A' + 1;

        if (i == 0) {
            cout << pesan[i];
        } else {
            int hasil = huruf + sebelumnya;

            if (hasil > 26)
                hasil = hasil - 26;

            cout << char(hasil + 'A' - 1);
        }

        sebelumnya = huruf;
    }

    return 0;
}