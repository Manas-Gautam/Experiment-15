//Name: - Manas Gautam
//PRN: - 23070123081
//Batch: - E&Tc {B}

// Experimnet 15 A: -

#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}

// Experiment 15 B: - 


#include<iostream>
using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    } else {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << n << "th Fibonacci number in Fibonacci Sequence is : " << fib(n) << endl;
    return 0;
}

// Experiment 15 C: -


#include<iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        cout << "Number should be greater than 1" << endl;
    }
    if (n == 1) {
        return 1;
    } else {
        return (n + sum(n - 1));
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of numbers from 1 to " << n << " is: " << sum(n) << endl;
    return 0;
}