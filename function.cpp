#include<iostream>
#include<string>
using namespace std;

//pass by value
int pourChai(int cups){
    cups+=5;
    cout<<"pouring "<<cups<<" cups of tea"<<endl;
    return 0;
}

//pass by reference
int pourRefChai(int &cups){
    cups+=5;
    cout<<"pouring "<<cups<<" cups of tea"<<endl;
    return 0;
}
int main(){
    int cups = 2;
    pourChai(5);
    cout<< "total cups "<<cups <<endl;


    
    pourRefChai(cups);
    cout<< "total cups "<<cups <<endl;
    
    return 0;
}