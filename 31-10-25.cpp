#include<iostream>
using namespace std;
int main() {
    string password;
     while (true) {
         cout << "Enter your password: ";
         cin >> password;

         if (password =="python123") {
           cout<<"acess granted!"<<endl;
             break;
         }
         else {
             cout<<"wrong password try again"<<endl;
         }
     }
    return 0;
}