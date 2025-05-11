#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> studentMarks; 
    
    studentMarks["Anika"] = 85;
    studentMarks["samin"] = 95;
    studentMarks["Maruf"] = 75;
    studentMarks["shakil"] = 65;
    
    cout << "Marks of Anika: " << studentMarks["Anika"] << endl; 
    
    cout << "All student marks:\n";
    map<string, int>::iterator it1;
    for (it1 = studentMarks.begin(); it1 != studentMarks.end(); ++it1){
        cout << it1->first << ": " << it1->second << endl;
    }
    
    studentMarks["Anika"] = 90;
    cout << "\nUpdated Marks:\n";
    map<string, int>::iterator it2;
    for (it2 = studentMarks.begin(); it2 != studentMarks.end(); ++it2){
        cout << it2->first << ": " << it2->second << endl;
    }
    
   return 0;
   
     
}
