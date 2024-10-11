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

// #include<iostream>
// using namespace std;

// int fibonacci(int n) {
//     if (n == 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main() {
//     int terms;
//     cout << "Enter the number of terms: ";
//     cin >> terms;

//     cout << "Fibonacci Series: ";
//     for (int i = 0; i < terms; i++) {
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;

//     return 0;
// }


//sum of array elements

// #include<iostream>
// using namespace std;

// int sumOfArray(int arr[], int n) {
//     if (n <= 0) {
//         return 0;
//     } else {
//         return arr[n - 1] + sumOfArray(arr, n - 1);
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int sum = sumOfArray(arr, n);
//     cout << "Sum of array elements: " << sum << endl;

//     return 0;
// }


