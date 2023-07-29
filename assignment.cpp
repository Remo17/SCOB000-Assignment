// Online C++ compiler to run C++ program online
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
cout<< "How many modules are you registered for? " ;
cin >>NumModules;
if(NumModules > 8)
    {
  cout<< "Invalid number of Modules";

    }//if for number of modules
string arr_modules[10];
int arr_Marks[10];
int CurrentMarks,Highes_Mark;


for (int i=0 ; i<3; ++i)
    {
    cout<< "Enter name of module "<<i+1;
    cin >> arr_modules[i];
    cout<< "Mark for "<<arr_modules[i]<< endl;
    cin >> CurrentMarks;
    arr_Marks[i]= CurrentMarks;
    Highes_Mark = Highest_Test(CurrentMarks);
    }//end of for
cout << Highes_Mark;

    return 0;
}
