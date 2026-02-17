
#include <iostream>
#include<conio.h>
using namespace std;

int main() {
 int n = 5;
 for ( int i = 0; i < n; i++ ){
  for ( int j = 0; j < n; j++ ){
    if( i == 0 || i == n-1 ){
      cout<<"*";
    } else {
      if( i+j == n -1){
        cout<<"*";
      } else if ( i + j < n-1){
        cout<<" ";
      }
    }
  }
  cout<<endl;
 }
  getch();
}
