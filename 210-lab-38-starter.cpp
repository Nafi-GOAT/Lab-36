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

    tree.insertNode("HELLO");
    tree.insertNode("WORLD");
    tree.insertNode("YAY");
         cout << "Testing for Milestone 2" << endl;
        tree.displayInOrder();

         return 0;
}