#include<iostream>
#include<conio.h>
using namespace std;

int main(){
   
    int i, j , n , m;
    cout<< "Enter the value of n\n";
    cin>>n;
    cout<<"Enter the value of m\n";
    cin>>m;
    for(i = 1; i<=n; i++){
        for(j = 1; j<=m; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    getch();
    return 0;
}