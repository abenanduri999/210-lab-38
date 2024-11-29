#include <iostream>
#include <string>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
     
    /*IntBinaryTree bst; 

    ifstream input ("codes.txt");
    int coun = 0; 
    string c; 
    while(getline(input, c))
    {
        bst.insertNode(c); 
    }*/

    int choice; 
    string code; 
    do
    {
        cout<<"Pick an Option: \n";
        cout<<"1) Add Record\n"; 
        cout<<"2) Delete Record\n";
        cout<<"3) Search for a Record\n";  
        cout<<"4) Modify a Record\n"; 
        cout<<"5) Exit\n"; 
        cin>>choice; 
        cin.ignore(); 

        switch(choice)
            {
                case 1: 
                    cout<<"Enter a new code: \n"; 
                    getline(cin, code); 
                    break; 
                
                case 2: 
                    cout<<"Enter code to delete: \n"; 
                    getline(cin, code); 
                    break; 

                case 3: 
                    cout<<"Enter code to Search: \n"; 
                    getline(cin, code); 
                    break; 

                case 4: 
                    cout<<"Enter code to modify:\n"; 
                    getline(cin, code); 
                    break; 

                case 5: 
                    cout<<"Goodbye.\n"; 
                    break; 
            }



    }while(choice != 5);


    return 0;
}