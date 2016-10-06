#include<iostream>
#include <string>

using namespace std;

bool isPal(int n);

int main () {
    int max = 0;
    for (int i = 0; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int x = i * j;
            if (x > max && isPal(x)) {
                max = x;
            }
        }
    }

    cout << "Result: " << max << endl;

    return 0;
}

bool isPal(int n) {
    string s = to_string(n);
    int i = 0;
    int j = s.length() - 1;
    while(i < j) {
       if  (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}


