#include <iostream>
using namespace std;

class remotelampu {
private:
    string sakLarNo[10];
public:
    void setSaklarNo(int i, string value) {
        sakLarNo[i] = value;
    }
    string getSaklarNo(int i) {
        return sakLarNo[i];
    }
};

int main() {
    remotelampu LampuRumah;

    LampuRumah.setSaklarNo(0, "lampu Tras Rumah");
    LampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    LampuRumah.setSaklarNo(2, "lampu Kamar Tidue");
    LampuRumah.setSaklarNo(3, "Lampu dapur");

    cout << LampuRumah.getSaklarNo(0) << endl;
    cout << LampuRumah.getSaklarNo(1) << endl;
    cout << LampuRumah.getSaklarNo(2) << endl;
    cout << LampuRumah.getSaklarNo(3) << endl;

    return 0;
}