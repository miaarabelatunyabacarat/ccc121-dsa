// fibonacci sequence using recursion 
#include <iostream>
using namespace std;


int nthFibonacci(int n){
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}
int main(){
    int n; //user input for the n
    cout << "Enter the nth number of the Fibonacci Sequence:";
    cin >> n;

    int fib[n];


    for(int i = 0; i < n; i++){
        fib[i] = nthFibonacci(i);
    }

    cout << "Fibonacci Sequence: ";
    for(int i = 0; i < n; i++){
        cout << fib[i] << " ";
    }

    return 0;
}