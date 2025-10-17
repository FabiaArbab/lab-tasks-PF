#include<iostream>
using namespace std;
int main() {
    //declare and initialize celsius temprature
    float celsius = 25.0;

    //calculate fahrenheit using formula
    float fahrenheit = (celsius * 9/5)+32;

    //display result
    cout<<celsius<<"°C = "<<fahrenheit<<"°F"<<endl;

    return 0;

}