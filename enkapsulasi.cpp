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