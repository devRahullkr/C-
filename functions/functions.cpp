#include <iostream>
using namespace std;



// if a function return nothing then we can use (void)
// void print(){
//     cout << "Hello World" << endl;
//     return;
// }

// int main(){
//     print();
//     return 0;
// }

// calculate sum of number from 1 to n;

int sum(int n){
    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
        sum += i;
    }
    return sum;
}

int main(){
    cout << "sum = " << sum(5) << endl;
    return 0;
}
