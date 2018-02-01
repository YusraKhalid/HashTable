//
//  hashTables.cpp
//  Assignment3
//
//  Created by Yusra Khalid on 12/31/17.
//  Copyright © 2017 Yusra Khalid. All rights reserved.
//

#include "hashTables.hpp"

int hashTables::nameToHash1(string name){
    int firstChar = int(name[0]);
    int hashList = decimalToLast3Binanry(firstChar);
    return hashList;
}

int hashTables::nameToHash2(string name){
    int hashAVL = decimalToLast3Binanry(int(name[1]));
    return hashAVL;
}


//convert decimal to binary and then takes last three digits and convert them back to decimal
int hashTables::decimalToLast3Binanry(int var){
    int l = 0;
    l = (var % 2);
    var/=2;
    l += (2*(var%2));
    var/=2;
    l += (4*(var%2));
    return l;
}

void hashTables::insert(hashTables h, string name){
    int list = h.nameToHash1(name);
    int avl = h.nameToHash2(name);
    
    hashTable[list].root = hashTable[list].insert(hashTable[list].root, avl, name);
    
    //root = avl.insert(root, avl);
}
void hashTables::display(){
    for (int i = 0; i<8; i++){
        hashTable[i].display(hashTable[i].root, 1, i);
    }
}
