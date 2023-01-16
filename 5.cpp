
//Տվյալների սեղմման RLE մեթոդ։
#include <cstdlib>
#include<iostream>
#include <string.h>
using namespace std;

int main() {
    string tox = "aaaaabbbbbbNNNN";
    cout << "RLE is: ";
    for (int i = 0; i < tox.length(); i++) {
        int k = 1;
        while (tox[i] == tox[i + 1] && i < tox.length() - 1) {
            k++;
            i++;
        }
        cout << tox[i] << k;
    }
    return 0;
}
