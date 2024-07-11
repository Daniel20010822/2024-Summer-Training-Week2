#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include "binary_search_tree.h"

using namespace std;

ifstream FILE_IN;

int main(int argc, char *argv[]) {
    BST tree;

    string filename = argv[1];
    string testcase = "testcase/" + filename;
    FILE_IN.open(testcase);

    while ( !FILE_IN.eof() ) {
        char action = '\0';
        int  value  = 0;
        int  low = 0, high = 0;
        vector<int> rangeResult;

        FILE_IN >> action;
        switch (action) {
            case 'i':
                FILE_IN >> value;
                tree.insert(value);
                break;
            case 's':
                FILE_IN >> value;
                cout << "Search " << value << ": " << (tree.search(value) ? "Found" : "Not Found") << endl;
                break;
            case 'p':
                tree.inorder();
                break;
            case 'm':
                cout << "Max: " << tree.findMax() << ", Min: " << tree.findMin() << endl;
                break;
            case 'r':
                FILE_IN >> low >> high;
                rangeResult = tree.rangeQuery(low, high);
                cout << "Nodes in range [" << low << ", " << high << "]: ";
                for (int value : rangeResult) {
                    cout << value << " ";
                }
                cout << endl;
                break;
            case 't':
                tree.printTree();
                break;
            default:
                break;
        }
    }

    return 0;
}