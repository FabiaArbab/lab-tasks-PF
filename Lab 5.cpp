#include<iostream>
using namespace std;
int main() {
    int m;
    cout<<"enter size of pyramid: ";
    cin>>m;
    for (int i=1; i<=m; i++) {
        for (int j=i; j<m; j++) {
            cout<<" ";
        }
        for (int k=1; k<= (2*i-1); k++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
