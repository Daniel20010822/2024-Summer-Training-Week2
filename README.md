# Week 2
 - ```git clone https://github.com/Daniel20010822/2024-Summer-Training-Week2.git``` to download the repository
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
|i val|Insert value "val" into BST|No cout|
|s val|Search value "val" in BST||
|p|Inorder traverse the BST and print out the result||
|m|Print out Min and Max values||
|r low high|Print out all the values within [low,high]||
|t|Show the tree structure of the BST|Debug purpose, feel free to try it out|

## Linked List (LL)
|Command|Description|Notes|
|-------|-----------|-----|
|b val|Insert value "val" at the beginning of the list|No cout|
|e val|Insert value "val" at the end of the list|No cout|
|p|Print out the list||
|d val|Delete an element by value "val"|No cout|
|r|Reverse the list|No cout|
|c|Remove repeated numbers in the list|No cout|

## Big thanks to @coherent17 for sharing his Makefile template!
 - [Coherent17 GitHub](https://github.com/coherent17)
