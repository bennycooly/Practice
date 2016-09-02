/////////////////////////////////////////////////
/// BinaryTree.cpp
/////////////////////////////////////////////////

#include "BinaryTree.h"

/////////////////////////////////////////////////
/// Implementations for Binary Tree.
/////////////////////////////////////////////////

template <typename T>
BinaryTree<T>::BinaryTree() {
    root = new Node();
}

/**
 * Initializes the root node with the value passed.
 * @param val The value the root node should contain.
 */
template <typename T>
BinaryTree<T>::BinaryTree(T const& val) {
    root = new Node(val);
}

template <typename T>
BinaryTree<T>::BinaryTree(BinaryTree<T> const& that) {
    root = that.root;
}


/**
 * Destructor
 */
template <typename T>
BinaryTree<T>::~BinaryTree() {
    if (root) {
        destroy(root);
    }
    root = nullptr;
}


template <typename T>
void BinaryTree<T>::insert(T const& val) {
    Node* new_node = new Node(val);
}

template <typename T>
void BinaryTree<T>::printTree() {
    if (!root) { return; }
    
}


/**
 * Private class methods.
 */

template <typename T>
void BinaryTree<T>::destroy(Node* root) {
    if (!root) { return; }
    destroy(root->left);
    destroy(root->right);
    delete root;
}


/////////////////////////////////////////////////
/// Implementations for Node.
/////////////////////////////////////////////////

template <typename T>
BinaryTree<T>::Node::Node() : m_val{} {}

template <typename T>
BinaryTree<T>::Node::Node(T const& val) : m_val{ val } {
    
}

template <typename T>
BinaryTree<T>::Node::Node(Node const& that) {
    m_val = that.m_val;
}

/**
* Destructor
*/
template <typename T>
BinaryTree<T>::Node::~Node() {

}
