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
    
}// int map::get(string word) {


void map::set (string word, int count) {

    string target_word = word;

    if( root == nullptr) {
        
        root = new node();
        root->word = word;
        root->count = count;
        
    }
    
    node* result =  find(root, word);
    node* current = find(root, word);
    
    if(result->word==word) {
        
        result->count = count;
        
    } else {
        
        if( target_word < current->word ) {
            current->left = new node();
            current->left->word = word;
            current->left->count = count;
        }
        else {
            current->right = new node();
            current->right->word = word;
            current->right->count = count;
        }
    }
}




node* map::find(node* current, const string & target_word)

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


void map::print() {
    
    print(root);
    
}

void map:: print (node* current) {
    
    if( current == nullptr) return;
    
    print(current->left);
    cout << current->word << ": "<< current->count <<";";
    print(current->right);
}





//}//using namespace ANTHONY_NASH_ASSIGNMENT_4 {
