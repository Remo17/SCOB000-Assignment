#include <iostream>
using namespace std;



int Highest_Test(int Mark)
 {
    int Current_High =0;

    if(Current_High< Mark)
    {
    Current_High = Mark;
    }//if
    return(Current_High);
 }//test for highest mark



int main() {
int NumModules;
int CurrentMarks,Highes_Mark;

cout<< "How many modules are you registered for? " ;//number of modules
cin >>NumModules;

    if(NumModules > 8){
        cout<< "Invalid number of Modules";
        exit;
        }//if for number of modules is above threshold
    else{

        string arr_modules[NumModules];
        int arr_Marks[NumModules];



for (int i=0 ; i<2; ++i){
    cout<< "Enter name of module "<<i+1;
    cin >> arr_modules[i];
    cout<< "Mark for "<<arr_modules[i]<< endl;
    cin >> CurrentMarks;
    arr_Marks[i]= CurrentMarks;
    Highes_Mark = Highest_Test(CurrentMarks);
    }//end of for

for (int j=0; j=4 ; j++){
    cout << arr_modules[0] <<" "<< arr_Marks[0];
    }//end of for

    }// end of else


    cout << Highes_Mark;

    return 0;
}
