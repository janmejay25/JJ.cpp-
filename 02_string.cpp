#include<iostream>
#include<string>
using namespace std;
int main(){

    //escape sequence 
    string favTea = "masala tea\n";
    string description = "known as \"best\" tea in india";
    cout << favTea << description <<endl;

    string userTea;
    int userQuentity;
    cout<< "what is your order\n";
    getline(cin, userTea);
    cout<< "how many cups\t"<<userTea<<"you want\n";
    cin >> userQuentity;
    cout << "your order is "<< userQuentity << " cups of " << userTea << endl;
    return 0;
}