/////////////////////////////////////////////////
/// BinaryTree.h
/////////////////////////////////////////////////

#pragma once

#include <cstdint>

template <typename T> class BinaryTree;


template <typename T>
class BinaryTree {
public:
    BinaryTree();
    BinaryTree(T const&);
    BinaryTree(BinaryTree const&);
    ~BinaryTree();

    void insert(T const&);

    void printTree();

private:
    class Node;

    Node* root;

    void destroy(Node*);
};

template <typename T>
class BinaryTree<T>::Node {
    friend class BinaryTree;

    T const& m_val;
    Node* left;
    Node* right;

    Node();
    Node(T const&);
    Node(Node const&);
    ~Node();
};

