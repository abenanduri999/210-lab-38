#include <iostream>
#include<string>
#include<fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    

    IntBinaryTree bst; 

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

        switch(choice)
            {
                case 1: 
                    cout<<"Enter a new code: \n"; 
                    getline(cin, code); 
                    break; 
                
                case 2: 
            }



    }while(choice != 5)

    return 0;
}