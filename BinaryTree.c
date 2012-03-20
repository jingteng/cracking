#include <stdlib>

#include "BinaryTree.h"
#include "RandArr.h"

void BTree_delTree(BTree * root) {
    if (!root) return;
    BTree_delTree(root->L);
    BTree_delTree(root->R);
    free(root);
}

BTree * BTree_newNode(int val) {
    BTree * node = (BTree*)malloc(sizeof(BTree));
    node->L=NULL;
    node->R=NULL;
    node->val=val;
    return node;
}

BTree * BTree_randInsNode(int val, BTree * root) {

BTree * BTree_randTree(int size) {
    int i=size;
    BTree * tree = NULL;
    int * rval;
    
    if (size<=0) return NULL;
    rval = randarr(size,0,size*10);

    while (i)
        tree=BTree_randInsNode(rval[--i],tree);

    free(rval);
    return tree;
}

BTree * BTree_searchVal(BTree * root, int val) {
    BTree * res=NULL;
    if (root->val==val) return root;
    res=BTree_searchVal(root->L, val);
    if (res) return res;
    res=BTree_searchVal(root->R, val);
    if (res) return res;
    return NULL;
}

//int BTree_delNode(BTree * root, int val);
    
//BTree * BTree_randInsNode(BTree * node);
//
void BTree_print(BTree * root) {
    if (!root) printf("NULL");
    printf("%d (", root->val);
    BTree_print(root->L);
    printf(",");
    BTree_print(root->R);
    printf(")");
}

