#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include "linked_list.h"

using namespace std;

ifstream FILE_IN;

int main(int argc, char *argv[]) {
    LinkedList list;

    string filename = argv[1];
    string testcase = "testcase/" + filename;
    FILE_IN.open(testcase);

    while ( !FILE_IN.eof() ) {
        char action = '\0';
        int value = 0;

        FILE_IN >> action;
        switch (action) {
            case 'b':
                FILE_IN >> value;
                list.insertAtBeginning(value);
                break;
            case 'e':
                FILE_IN >> value;
                list.insertAtEnd(value);
                break;
            case 'p':
                list.printList();
                break;
            case 'd':
                FILE_IN >> value;
                list.deleteByValue(value);
                break;
            case 'r':
                list.reverseList();
                break;
            case 'c':
                list.removeDuplicates();
                break;
            default:
                break;
        }
    }

    return 0;
}