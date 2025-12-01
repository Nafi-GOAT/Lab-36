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

         cout << "Testing for Milestone 3" << endl; 

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

         return 0;
}