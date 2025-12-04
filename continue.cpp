#include<iostream>
#include<string>
using namespace std;
int main(){
    string typeTea[3] = {"green","black", "white"};

    for(int i = 0;i<3;i++){
        cout<<"brewing "<<typeTea[i]<<endl;
    }
    cout<<"-----"<<endl;
    for(int i = 0;i<3;i++){
        if(typeTea[i] == "green"){
            cout<<"skipping green tea"<<endl;
            continue;
        }
        cout<<"brewing "<<typeTea[i]<<endl;
    }
    return 0;
}