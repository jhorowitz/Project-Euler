#include<iostream>

using namespace std;

int main () {
    int limit = 1000;
    int count = 0;
    for (int i = 3; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            count += i;
        }
    }
    cout << "Result: " << count << endl;
    return 0;
}
