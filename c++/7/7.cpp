#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n);

int main () {
    int count = 1;
    int lastPrime = 2;
    for (int i = 3; count < 10001; i++) {
        if (isPrime(i)) {
            lastPrime = i;
            count++;
        }
    }

    cout << "Result: " << lastPrime << endl;

    return 0;
}


bool isPrime(int n) {
        if (n <= 1) 
            return false;
        if (n == 2) 
            return true;
        if (n % 2 == 0) 
            return false;
        for (int i = 3; i <= sqrt(n); i += 2) 
            if (n % i == 0) 
                return false;
        return true;
}

