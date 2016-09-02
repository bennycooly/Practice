#include <iostream>
#include <string>

#include "BinaryTree.cpp"

using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "Trees" << endl;
    BinaryTree<uint32_t> tree{ };
    tree.insert(3);
}