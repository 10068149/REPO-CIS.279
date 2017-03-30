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

void test10();
//: TEST4(): void PutItem(ItemType item);
//: TEST2(): int GetLength() const;
//: void test1(); //: TEST1(): bool IsFull() const;

void test11();
// put 1 item into the list;
// verify that getitem it returns: true

void test12();
// *ADD: item...
// *DELETE: item...
// *VERIFY: getitem() does NOT find item after deltion...



int main()
{

    test1(); //: TEST1(): bool IsFull() const;
//    test2(); //: TEST2(): int GetLength() const;
//    test3(); //: TEST3(): ItemType GetItem( ItemType Item, bool& found) const;
//    test4(); //: TEST4(): void PutItem(ItemType item);
    test5(); //: TEST5(): void DeleteItem(ItemType item);
//    test6(); //: TEST6(): void ResetList();
//    test7(); //: ItemType GetNextItem();
    
//    test10();
//    : TEST4(): void PutItem(ItemType item);
//    : TEST2(): int GetLength() const;
//    : void test1(); //: TEST1(): bool IsFull() const;


//    test11();
//    // *PUT: item into the list...
//    // *VERFIY: that getitem() returns: "true"
    
    test12();
    // *ADD: item...
    // *DELETE: item...
    // *VERIFY: getitem() does NOT find item after deltion...
    

    
    
    return 0;
}






void test1()
//: TEST1(): bool IsFull() const;
{

    unsorted list;
    assert( !list.IsFull() );
//    assert( list.IsFull() );
    
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
    ItemType item;
    
    list.PutItem(item);
    
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
    assert( list.GetLength() == 0 );
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



void test10()
//TEST10(): void PutItem(ItemType item); int GetLength() const; test1();
//: TEST1(): bool IsFull() const; ...
{

    {
        cout
            << endl
            << "//TEST10(): // void PutItem(ItemType item);"       << endl
            << "            // int GetLength() const; test1();"    << endl
            << "            // bool IsFull() const; ..."           << endl
            << endl;
    }
    
    ItemType item;
    cout << endl << "// ItemType item..." << endl;
    unsorted list;
    cout << "// unsorted list..." << endl;
    
    cout << "//: TEST4(): void PutItem(ItemType item)..." << endl;
    list.PutItem( item );
    
    cout << "//: TEST2(): int GetLength() const..." << endl;
    assert( list.GetLength() == 1 );
    
    cout << "//: TEST1(): bool IsFull() const..." << endl;
    assert( list.IsFull() == false );
    

}




void test11()
// Put 1 item into the list: void PutItem(ItemType item);
// Verify that getitem it returns: true; GetItem( ItemType Item, bool& found) const;...
{
    ItemType item;
    cout    << endl << "// ItemType item..."
            << endl << endl;
    
    unsorted list;
    cout    << "// unsorted list..." << endl;

    cout
            << "// Put 1 item into the list: void PutItem(ItemType item)..."
            << endl << endl;
    list.PutItem( item );
    
    cout
            << "// Verify that getitem it returns: true"
            << endl << endl
            << "// GetItem( ItemType Item, bool& found) const;..."
            << endl << endl;

    bool tell_the_truth =false;
    cout    << "// bool tell_the_truth =false..."
            << endl << endl;
    
    list.GetItem( item, tell_the_truth );
    cout    << "// list.GetItem( item, tell_the_truth: FALSE )..."
            << endl << endl;
    
    assert( tell_the_truth == true);
    cout    << "// PASSED: assert( tell_the_truth == TRUE )..."
            << endl << endl;

}



void test12()
// *ADD: item...
// *DELETE: item...
// *VERIFY: getitem() does NOT find item after deltion...
{

    {
        cout
        << "// *ADD: item..." << endl
        << "// *DELETE: item..." << endl
        << "// *VERIFY: getitem() does NOT find item after deltion..." << endl;
    }
    
    ItemType item;
    cout
        << endl
        << "// ItemType item: CREATED ..."
        << endl;
    
    unsorted list;
    cout
        << "// unsorted list: CREATED ... "
        << endl;
    
    bool true_or_false = false;
    cout
        << "// bool true_or_false: FALSE; CREATED ..."
        << endl << endl;

    
    list.PutItem( item );
    cout
        << "// *ADD: item..."
        << endl
        << "// TEST4(): void PutItem(ItemType item);"
        << endl
        << "// COMPLETED!"
        << endl << endl;
    
    list.DeleteItem( item );
    cout
        << "// *DELETE: item..."
        << endl
        << "// TEST5(): void DeleteItem(ItemType item);"
        << endl
        << "// COMPLETED!"
        << endl << endl;

    list.GetItem( item, true_or_false);
    assert( true_or_false == false );
    cout
        << "// *VERIFY: getitem() does NOT find item after deltion..."
        << endl
        << "// TEST3(): ItemType GetItem( ItemType Item, bool& found) const;"
        << endl
        << "// ALL TEST PASSED!!"
        << endl << endl;

}


