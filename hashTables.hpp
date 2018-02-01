//
//  hashTables.hpp
//  Assignment3
//
//  Created by Yusra Khalid on 12/31/17.
//  Copyright © 2017 Yusra Khalid. All rights reserved.
//

#ifndef hashTables_hpp
#define hashTables_hpp

#include <stdio.h>
#include "avl.hpp"


class hashTables{
public:
    
    avlTree a1,a2,a3,a4,a5,a6,a7,a8;
    avlTree hashTable[8] = {a1,a2,a3,a4,a5,a6,a7,a8};
    hashTables(){
    }
    int nameToHash1(string name);
    int nameToHash2(string name);
    int decimalToLast3Binanry(int var);
    void insert(hashTables h, string name);
    void display();
};
#endif /* hashTables_hpp */

