#include<iostream>
#include<vector>
using namespace std;

class Chai{//class name starts with capital letter
    public:
        string typeOfTea;
        vector<string> ingredients;
        void displayChaiDetails(){
            cout << "Tea Name: " << typeOfTea << endl;
            cout << "Ingredients: " ;
            for(string ingridient : ingredients){
                cout << ingridient << " ";
            }
            cout << endl;
        }
};//remember to put ;

int main(){
    Chai masalaChai;
    masalaChai.typeOfTea = "Masala Chai";
    masalaChai.ingredients = {"Tea Leaves", "Milk", "Sugar", "Spices"};

    masalaChai.displayChaiDetails();

    Chai gingerChai;
    gingerChai.typeOfTea = "Ginger Tea";
    gingerChai.ingredients = {"teaLeaves","Ginger","water"};

    gingerChai.displayChaiDetails();
    

 
    
    return 0;
}
