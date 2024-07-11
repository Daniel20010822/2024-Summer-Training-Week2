#ifndef _BINARY_SEARCH_TREE_
#define _BINARY_SEARCH_TREE_

#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BST {
public:
    Node* root;

    BST() : root(nullptr) {}

    void insert(int value);
    bool search(int value);
    void inorder();
    int findMin();
    int findMax();
    vector<int> rangeQuery(int low, int high);
    void printTree();

private:
    /* Write some private functions if needed */
};

#endif