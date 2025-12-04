#include<iostream>
using namespace std;
int main(){
    double chaiTemp[5]={70,75.4,56,92.1,88};

    //print array
    cout<<"chai tempratures are : "<<endl;
    for(int i=0;i<5;i++){
        cout<<chaiTemp[i]<<" degree "<<endl;
    }
    return 0;
}
