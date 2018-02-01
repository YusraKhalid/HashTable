//
//  avl.hpp
//  Assignment3
//
//  Created by Yusra Khalid on 12/31/17.
//  Copyright © 2017 Yusra Khalid. All rights reserved.
//


#ifndef avl_hpp
#define avl_hpp

#include <stdio.h>


#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
#define pow2(n) (1 << (n))
using namespace std;


// Node Declaration

struct avlNode
{
    int avlKey;
    string name;
    struct avlNode *left;
    struct avlNode *right;
}*root;

/*
 // Class Declaration
 */
class avlTree
{
    
public:
    avlNode* root;
    avlTree()
    {
        root = NULL;
    }
    
    int height(avlNode *);
    int diff(avlNode *);
    avlNode *rr_rotation(avlNode *);
    avlNode *ll_rotation(avlNode *);
    avlNode *lr_rotation(avlNode *);
    avlNode *rl_rotation(avlNode *);
    avlNode* balance(avlNode *);
    avlNode* insert(avlNode *, int ,string);
    void display(avlNode *, int, int);
    void inorder(avlNode *);
    void preorder(avlNode *);
    void postorder(avlNode *);
    
};
#endif /* avl_hpp */
