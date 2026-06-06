#include<iostream>
using namespace std;
int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    cout << "Numbers from 1 to " << n << ": ";
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    
    cout << endl;
    
    return 0;
}