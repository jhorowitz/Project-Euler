#include<iostream>
#include <cmath>

using namespace std;

bool isPrime(int n);

int main () {
    long long n = 600851475143;
    int max = 0;

    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0 && isPrime(i)) {
                max = i;
        }
    }

    cout << "Result: " << max << endl;

    return 0;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


