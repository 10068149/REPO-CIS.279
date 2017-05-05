//
//  map.HPP
//  CIS.279
//
//  Created by CIS on 5/4/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

// !!! NOT RECOGNIZING "STRING" WITHOUT THIS !!!
#include <iostream>
// <iostream>, Header that defines the standard input/output stream objects

//#include <cstdlib>
// <cstdlib>, C Standard General Utilities Library

#include "node.HPP"

#ifndef map_hpp
#define map_hpp

//using namespace std;

namespace ANTHONY_NASH_ASSIGNMENT_4 {

    class map  {

        public:
        
            void print();
        // ...
        // ...
            int get (string word);
            // ...
            // ...
            void set(string word, int count);
            // ...
            // ...
        
        private:
        
            void print (node* current);
        
            node* root;
            //...
            //...
        
            node* find(node* current, const string & target_word);
            // ...
            // ...
            bool less(const string & w1, const string & w2);
            // ...
            // ...
        
    };//class map...

// to use me, replace old word_map[word]++ with
// int count = map.get(word);
// map.set(word, count + 1);


} //namespace ANTHONY_NASH_ASSIGNMENT_4 {...}

#endif /* map_hpp */
