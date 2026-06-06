#include<iostream>
using namespace std;
int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    cout << "Numbers from 1 to " << n << ": ";
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= n);
    
    cout << endl;
    
    return 0;
}