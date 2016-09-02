#include <iostream>
#include <string>

#include "BinaryTree.cpp"

using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "Trees" << endl;
    BinaryTree<int> tree{ 3 };
    tree.insert(3);
}