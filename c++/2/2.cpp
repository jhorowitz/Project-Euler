#include<iostream>

using namespace std;

int main () {
    int fib = 0;
    int next = 1;

    int sum = 0;

    while (fib < 4000000) {
        if (fib % 2 == 0) {
            sum += fib;
        }
        
        int tmp = fib;
        fib = next;
        next = fib + tmp;
    }
    
    cout << "Result: " << sum << endl;


    return 0;
}

