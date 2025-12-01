//
//Mehraj Hasan Nafi || COMSC 210 || Lab 36
// IDE used : Visual Studio Code 
//
//
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
         IntBinaryTree tree;

         cout << "Testing for Milestone 4" << endl; 

    tree.insertNode("HELLO");
    tree.insertNode("WORLD");
    tree.insertNode("YAY");
    tree.insertNode("COMSC");
    tree.insertNode("210");
    tree.insertNode("LAB");
    tree.insertNode("TREE");
    tree.insertNode("DATA");
    tree.insertNode("STRUCTURE");
    tree.insertNode("MILSTONE");


        cout << "Displaying in Order: " << endl;
        tree.displayInOrder();

        //test searches
        cout << "\nSearching for COMSC: ";
        if(tree.searchNode("COMSC"))
            cout << "Found!" << endl;
        else
            cout << "Not Found!" << endl;

            cout << "\nSearching for TEST: ";
        if(tree.searchNode("TEST"))
            cout << "Found!" << endl;
        else
            cout << "Not Found!" << endl;   
            
            //test deletions
        cout << "\nRemoving COMSC and LAB from the tree." << endl;
        tree.remove("COMSC");
        tree.remove("LAB");

        cout << "\nDisplaying in Order after deletions: " << endl;
        tree.displayInOrder();

         return 0;
}