// #include <iostream>
// using namespace std;

// void computeReachability(int **graph, int n) {
//     for (int k = 0; k < n; ++k) {
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < n; ++j) {  
//                 graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]); 
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the number of vertices: ";
//     cin >> n;


//     int **graph = new int *[n];
//     for (int i = 0; i < n; i++) {
//         graph[i] = new int[n];
//     }

   
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             graph[i][j] = 0; 
//         }
//     }

    
//     cout << "Enter the adjacency matrix (0 or 1):" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> graph[i][j]; 
//         }
//     }

    
//     computeReachability(graph, n);

    
//     cout << "Reachability matrix:" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << graph[i][j] << " "; 
//         }
//         cout << endl;
//     }

  
//     for (int i = 0; i < n; i++) {
//         delete[] graph[i];
//     }
//     delete[] graph;

//     return 0;
// }







// #include<iostream>
// using namespace std;
// template<class T>
// T square(T num)
// {
//     return(num*num);
// }
// int main(){
//     int num1=3;
//     cout<<"\n square of "<<num1<<"="<<square<int>(num1);
//     float num2=5.6;
//         cout<<"\n square of "<<num2<<"="<<square<float>(num2);
//         double num3=123.456;
//             cout<<"\n square of "<<num3<<"="<<square<double>(num3);

// return 0;
// }




#include <iostream>
using namespace std;

int main() {
   
    int num1, num2;

  
    cout << "Enter the first number: ";
    cin >> num1;  

    cout << "Enter the second number: ";
    cin >> num2;  

    if (num1 < num2) {
        cout << "The minimum number is: " << num1 << endl;  
    } else {
        cout << "The minimum number is: " << num2 << endl;  
    }

    return 0; 
}
