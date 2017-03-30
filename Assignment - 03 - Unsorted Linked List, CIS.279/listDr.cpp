//
//  main.cpp
//  Assignment - 03 - Unsorted Linked List, CIS.279
//
//  Created by CIS on 3/20/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cassert>  // provides: DEBUGING TOOLS...

#include "unsorted.hpp"
#include "ItemType.hpp"

using namespace std;
using namespace ANTHONY_NASH_ASSIGNMENT_3;


void test1(); //: TEST1(): bool IsFull() const;
void test2(); //: TEST2(): int GetLength() const;
void test3(); //: TEST3(): ItemType GetItem( ItemType Item, bool& found) const;
void test4(); //: TEST4(): void PutItem(ItemType item);
void test5(); //: TEST5(): void DeleteItem(ItemType item);
void test6(); //: TEST6(): void ResetList();
void test7(); //: ItemType GetNextItem();





int main()
{

//test1(); // TEST1(): bool IsFull() const;
//test2(); //: TEST2(): int GetLength() const;
//test3(); //: TEST3(): ItemType GetItem( ItemType Item, bool& found) const;
//test4(); //: TEST4(): void PutItem(ItemType item);
test5(); //: TEST5(): void DeleteItem(ItemType item);
//test6(); //: TEST6(): void ResetList();
//test7(); //: ItemType GetNextItem();

//    bool node_test = true;
//    assert( ("How you doooonnnn... ", node_test) );
    
//    cout    << "int main() {...}"
//            << endl
//            << endl
//            << endl;
    
    
    return 0;
}






void test1()
//: TEST1(): bool IsFull() const;
{

    unsorted list;
    assert( !list.IsFull() );
    assert( list.IsFull() );
    
}


void test2()
//: TEST2(): int GetLength() const;
{
    unsorted list;
    assert( list.GetLength() == 0);
}

void test3()
//: TEST3(): ItemType GetItem( ItemType Item, bool& found) const;
{

    {
        cout
            << endl
            << "//: TEST3(): ItemType GetItem( ItemType Item, bool& found) const;"
            << endl << endl;
    }
    
    unsorted list;
    ItemType item_is;
    bool tell_the_truth =false;
    
    list.GetItem( item_is, tell_the_truth );
    
    assert( tell_the_truth == false);
    
    
}


 void test4()
//: TEST4(): void PutItem(ItemType item);
{
    unsorted list;
    
}


 void test5()
//: TEST5(): void DeleteItem(ItemType item);
{
 
    {
        cout
            << endl
            << "//: TEST5(): void DeleteItem(ItemType item);"
            << endl << endl;
    }
    
    unsorted list;
    ItemType item_is;
    list.DeleteItem(item_is);
}


 void test6()
//: TEST6(): void ResetList();
{
    {
        cout
            << endl
            << "//: TEST6(): void ResetList();"
            << endl << endl;
    }
    
}

// void test7()
//: ItemType GetNextItem();
//{
//}

