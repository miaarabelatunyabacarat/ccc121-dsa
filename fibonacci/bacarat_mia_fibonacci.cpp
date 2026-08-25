//fibonacci sequence in iteration method
#include <iostream>
using namespace std;


int main(){
    //iteration:

    int n = 0; //user input for the n
    cout << "Enter the nth number of the Fibonacci Sequence:";
    cin >> n;

    int fib[n];

    // initialize the 1st and 2nd term
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < n; i ++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "Fibonacci Sequence: ";
    for(int i = 0; i < n; i++){
        cout << fib[i] << " ";
    }

    
}