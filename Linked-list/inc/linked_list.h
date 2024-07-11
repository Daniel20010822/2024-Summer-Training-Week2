#ifndef _LINKED_LIST_
#define _LINKED_LIST_

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    void deleteByValue(int value);
    void reverseList();
    void removeDuplicates();
    void printList();

private:
    /* Write some private functions if needed */
};

#endif