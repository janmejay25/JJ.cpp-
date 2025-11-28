#include <iostream> //preprocessor directive 
using namespace std;
using std::cout;//only cout from std namespace

namespace myspace{
    void display(){
        cout << "inside namespace mysppace";
    }
}
int main(){
    myspace::display();

    cout << "hello world" << endl;
    std::cout <<"hello direct w/o using namespace";
    return 0;
}
