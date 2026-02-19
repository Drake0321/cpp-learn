#include<iostream>

using namespace std;

void minOfTwo( int a, int b){
   int min = (a < b) ? a : b; 
   cout << "Minimum is : " << min;
}

int main(){
    int a, b;
    cin >> a >> b;
    minOfTwo(a,b);
    return 0;
}