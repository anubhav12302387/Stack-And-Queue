// #include<iostream>
// using namespace std;

// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     int result = factorial(number);
//     cout << "Factorial of " << number << " is: " << result << endl;

//     return 0;
// }


// fibonaci series

#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

