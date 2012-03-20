#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

typedef struct binaryTree_struct {
    binaryTree_struct * L, * R;
    int val;
} BTree;

void BTree_delTree(BTree * root);
BTree * BTree_newNode(int val);
BTree * BTree_randTree(int size);

BTree * BTree_searchVal(BTree * root, int val);
BTree * BTree_delNode(BTree * root, int val);
BTree * BTree_randInsNode(BTree * root, BTree * node);

void BTree_print(BTree * root);

#endif
