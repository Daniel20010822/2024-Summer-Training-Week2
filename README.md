# Week 2
 - Run ```./gen_golden_ans case<num>.txt``` to see the golden answer
 - Run ```make check_ans``` to check the correctness of your code, remember to compile your code first!
 - You can create your own testcase in ```testcase/``` folder, naming ```case<num>.txt```
 - Try to understand the content in Makefile

## Structure (BST for example)
```
.
├── inc
│   └── binary_search_tree.h // Your code
├── script
│   └── check_ans.sh
├── src
│   └── binary_search_tree.cpp // Your code
├── testcase
│   ├── case1.txt
│   ├── case2.txt
│   └── case3.txt
├── gen_golden_ans
├── main.cpp
└── Makefile

```

## Binary Search Tree (BST)
|Command|Description|Notes|
|-------|-----------|-----|
|i val|Insert value "val" into BST||
|s val|Search value "val" in BST||
|p|Inorder traverse the BST and print out the result||
|m|Print out Min and Max values||
|r low high|Print out all the values within [low,high]||
|t|Show the tree structure of the BST|Debug purpose, there is no 't' in testcase|

## Linked List (LL)
|Command|Description|Notes|
|-------|-----------|-----|
|b val|Insert value "val" at the beginning of the list||
|e val|Insert value "val" at the end of the list||
|p|Print out the list||
|d val|Delete an element by value "val"||
|r|Reverse the list||
|c|Remove repeated numbers in the list||
