#include<iostream>

using namespace std;

int sumOfSquares(int n);
int squareOfSum(int n);

int main () {
    int i = 100;
    
    cout << "Result: " << squareOfSum(i) - sumOfSquares(i) << endl;

    return 0;
}

int sumOfSquares(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int squareOfSum(int n) {
    int sum = (n * (n + 1)) / 2;
    return sum * sum;
}

