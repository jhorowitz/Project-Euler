#include<iostream>

using namespace std;

bool isDivis(int n);

int main () {
    long i = 0;
    while (!isDivis(i)) {
        i += 20;
    }

    cout << "Result: " << i << endl;

    return 0;
}


bool isDivis(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= 20; i++) {
        if (n % i != 0) return false;
    }
    return true;
}

