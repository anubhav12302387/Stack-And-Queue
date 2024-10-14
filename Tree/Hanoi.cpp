#include<iostream>
using namespace std;
//1 source
//2 auxillary
//3 destination

int moveDisks(int n, char source, char auxillary, char destinations) {
    if(n==1){
        cout<<"Move disk 1 from rod"<<source<<" to rod"<<destinations<<endl;
        return 1;
    }1
    int moves = moveDisks(n - 1, source, destinations, auxillary);
    cout<<"move disk "<< n <<" from rod "<<source<<" to rod "<<destinations<<endl;
    moves = moves + 1;
}




int main(){
    int n;
    cin >> n;

    int totalMoves = moveDisks(n, '1', '2', '3');

    cout << totalMoves << endl;

    return 0;
}