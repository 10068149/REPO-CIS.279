//
//  map.CPP
//  CIS.279
//
//  Created by CIS on 5/4/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include "map.HPP"
#include "node.HPP"

using namespace std;
using namespace ANTHONY_NASH_ASSIGNMENT_4;
//namespace ANTHONY_NASH_ASSIGNMENT_4 {


int map::get(string word) {
    
    if (root == nullptr)
        return 0;
    
    node* result = find(root, word);
    
    if( result->word == word ) return result->count;
        else return 0;
// !!! ERROR: PRIVATE MEMBER ACCESS
    
}// int map::get(string word) {


void map::set(string word, int count) {
    
    // if root null - create new node
    // else find node using find
    // if result word equal to this word, replace count value
    // if result word less then this,
    // create new node and attach to the left*
    // else - attach to the right
    
}


node* map::find(node* current, const string & target_word)
// !!! PRIVATE MEMEBR ISSUES !!!
{
    if(current->word==target_word)
        return current;
    
    if(less(current->word, target_word)) {
        if(current->left!=nullptr)
            return current->left;
        else
            return current;
    } else {
        if(current->right!=nullptr)
            return current->right;
        else
            return current;
    }
//    return current;// !!! REMOVE WHEN ALL IS FIXED !!!
}


bool map::less(const string & w1, const string & w2)
{
    // return true if w1 less then w1
    // by less i mean string sorted by abcd...
    return false;
    
}

//}//using namespace ANTHONY_NASH_ASSIGNMENT_4 {
