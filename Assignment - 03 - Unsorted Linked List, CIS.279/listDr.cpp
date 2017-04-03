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

void test13();
// *PUT: item into list
// *GET: *different* item from the list.
// *VERIFY: *different* was NOT found

void test14();


void test15(); //
//1. create a list: unsorted list;
//2. create an item: ItemType item_A
//3. create a second dufferent item: item_B : .change_value()
//4. add both items into the list: void PutItem(ItemType item);
//5. delete first item: void DeleteItem(ItemType item);
//6. get second item: ItemType GetItem( ItemType Item, bool& found) const;
//7. verify it was found: bool: found: true



int main()
{

    test1(); //: TEST1(): bool IsFull() const;
    test2(); //: TEST2(): int GetLength() const;
    test3(); //: TEST3(): ItemType GetItem( ItemType Item, bool& found) const;
    test4(); //: TEST4(): void PutItem(ItemType item);
    test5(); //: TEST5(): void DeleteItem(ItemType item);
//    test6(); //: TEST6(): void ResetList();
//    test7(); //: ItemType GetNextItem();
    
    test10();
//    : TEST4(): void PutItem(ItemType item);
//    : TEST2(): int GetLength() const;
//    : void test1(); //: TEST1(): bool IsFull() const;


    test11();
//    // *PUT: item into the list...
//    // *VERFIY: that getitem() returns: "true"
    
    test12();
//    // *ADD: item...
//    // *DELETE: item...
//    // *VERIFY: getitem() does NOT find item after deltion...
    
    test13();
//    // *PUT: item into list
//    // *GET: *different* item from the list.
//    // *VERIFY: *different* was NOT found
    
    
    test14();//:
    // .. .


    test15(); //
    //1. create a list: unsorted list;
    //2. create an item: ItemType item_A
    //3. create a second dufferent item: item_B : .change_value()
    //4. add both items into the list: void PutItem(ItemType item);
    //5. delete first item: void DeleteItem(ItemType item);
    //6. get second item: ItemType GetItem( ItemType Item, bool& found) const;
    //7. verify it was found: bool: found: true
    

    
    
    return 0;
}


void test15() //:
//1. create a list: unsorted list;
//2. create an item: ItemType item_A
//3. create a second dufferent item: item_B : .change_value()
//4. add both items into the list: void PutItem(ItemType item);
//5. delete first item: void DeleteItem(ItemType item);
//6. get second item: ItemType GetItem( ItemType Item, bool& found) const;
//7. verify it was found: bool: found: true
{
    cout << "void test15() //:" << endl << endl;
    
    cout << "   //1. *CREATE: unsorted list;" << endl << endl;
    unsorted list;
    
    cout << "   //2. *CREATE: ItemType item_A" << endl << endl;
    ItemType item_A;
    
    cout << "   //3. *CREATE: a second dufferent item; item_B" << endl
         << "        .change_value( 3 )" << endl << endl;
    ItemType item_B;
    item_B.change_value( 3 );
    
    cout << "   //4. ADD both items into the list: void PutItem(ItemType item);"<< endl <<endl;
    list.PutItem( item_A );
    cout << "   //4. list.PutItem( item_A ); | ADDED!!" << endl;
    list.PutItem( item_B );
    cout << "   //4. list.PutItem( item_B ); | ADDED!!" << endl << endl;
    
    cout << "   //5. DELETE SECOND item: void DeleteItem(ItemType item B);" << endl;
    list.DeleteItem( item_B );
    cout << "   //5. list.DeleteItem( item_B ); | DELETED!!" << endl << endl;
    
    cout << "   //6. GET first item: ItemType GetItem( ItemType Item A, bool& found) const;" << endl << endl;
    bool True_or_False = true;
    list.GetItem( item_A, True_or_False );
    
    cout << "   //7. VERIFY: Item A was found: bool: found: true" << endl;
    assert( True_or_False == true );
    cout << "   //7. assert( True_or_False == true ); | LOCATED!!" << endl << endl;
    
    cout << "   //8. VERIFY: check what's inside LIST | Item_A " << endl;
    True_or_False = true;
    list.GetItem( item_A, True_or_False );
    cout << "   //8. verify it was found: bool: found: true" << endl;
    assert( True_or_False == true );

    cout << "   //8. VERIFY: check what's inside LIST | Item_B " << endl;
    True_or_False = true;
    list.GetItem( item_B, True_or_False );
    cout << "   //8. verify it was found: bool: found: FALSE" << endl << endl;
    assert( True_or_False == false );
    

}



void test14()
//1. create item1
//2  create different item2
//3. add item1 into list
//4. delete item2 from the list
//5. get item1 from the list
//6. assert found == true
{
    
    cout << "// START: void test14();" << endl << endl;
    
    
    cout << "   // [CREATED]: unsorted list;" << endl << endl;
    unsorted list;
    
    cout << "   //#1. create item1" << endl << endl;
    ItemType item1;
    
    cout << "   //#2  create different item2" << endl;
    cout << "   // item2.change_value( 7 );" << endl << endl;
    ItemType item2;
    item2.change_value( 7 );
    
    cout << "   //#3. add item1 into list" << endl << endl;
    list.PutItem( item1 );
    
    cout << "   //#4. delete item2 from the list" << endl << endl;
    list.DeleteItem( item2 );
    
    cout << "   //#5. get item1 from the list" << endl;
    bool TRUE_or_FALSE = false;
    cout << "   //#5. [CREATED]: bool TRUE_or_FALSE = true;" << endl << endl;
    list.GetItem( item1, TRUE_or_FALSE );
    
    cout << "   //#6. assert found == true" << endl;
    assert( TRUE_or_FALSE == true);
    cout << "   //#6. ASSERT(): PASSED!!!"
    << endl << endl;
    
    cout << " xxx ALL TEST COMLPETED: PASSED xxx"
    << endl << endl << endl;
    
    
    
    
    
}



void test13()
// *PUT: item into list
// *GET: *different* item from the list.
// *VERIFY: *different* was NOT found
{
    cout
    << "// TEST13():" << endl
    << "// #1: create 2 items ( NOT EQUAL )" << endl
    << "// #2: compare them" << endl
    << "// #3: after you are sure that they are not equal;" << endl
    << "       put the first one in list" << endl
    << "// #4: try to get the second one from the list" << endl
    << endl << endl;
    
    ItemType item1;
    item1.change_value( 1 );
    
    cout
    << endl
    << "    #1: create 2 items ( NOT EQUAL )" << endl
    << "    #1: ItemType item1: CREATED: "
    << endl;
    
    ItemType item2;
    item2.change_value( 0 );
    
    cout
    << endl
    << "    #1: create 2 items ( NOT EQUAL )" << endl
    << "    #1: ItemType item2: CREATED: "
    << endl;
    
    unsorted list;
    cout
    << "    // unsorted list: CREATED ... "
    << endl;
    
    bool true_or_false = false;
    cout
    << "    // bool true_or_false: FALSE; CREATED ..."
    << endl << endl;
    
    
    cout
    << "    #2: compare them..." << endl
    << "    #2: CALL TO: assert( item1.ComparedTo( item2 ) != item1.EQUAL );" << endl;
    assert( item1.ComparedTo( item2 ) != item1.EQUAL );
    cout
    << "    #2: ASSERT(): PASSED!!!"
    << endl << endl;
    
    cout
    << "    #3: after you are sure that they are not equal;" << endl
    << "        put the first one in list..." << endl
    << "    #3: CALL: list.PutItem( item1 );" << endl
    << endl << endl;
    list.PutItem( item1 );
    
    cout
    << "    #3: *VERIFY: *different* was NOT found" << endl
    << "    #3: CALL: list.GetItem( item2, true_or_false );" << endl
    << endl << endl;
    list.GetItem( item2, true_or_false );
    
    cout << "    #3: CALL: assert( true_or_false = false );" << endl;
    assert( true_or_false == false );
    cout
    << "    #3: ASSERT(): PASSED!!!"
    << endl << endl;
    
    
    
    
}



void test12()
// *ADD: item...
// *DELETE: item...
// *VERIFY: getitem() does NOT find item after deltion...
{
    
    cout
    << "// void test12():" << endl
    << "    // *ADD: item..." << endl
    << "    // *DELETE: item..." << endl
    << "    // *VERIFY: Getitem(): does NOT find item after deltion..." << endl;
    
    ItemType item;
    cout
    << endl
    << "    // ItemType item: CREATED: "
    << endl;
    
    unsorted list;
    cout
    << "    // unsorted list: CREATED ... "
    << endl;
    
    bool true_or_false;
    cout
    << "    // bool true_or_false: FALSE; CREATED ..."
    << endl << endl;
    
    
    list.PutItem( item );
    cout
    << "    // *ADD: item..."
    << endl
    << "    // TEST4(): void PutItem(ItemType item);"
    << endl
    << "    // COMPLETED!"
    << endl << endl;
    
    list.DeleteItem( item );
    cout
    << "    // *DELETE: item..."
    << endl
    << "    // TEST5(): void DeleteItem(ItemType item);"
    << endl
    << "    // COMPLETED!"
    << endl << endl;
    
    
    true_or_false = true;
    list.GetItem( item, true_or_false);
    assert( true_or_false == false );
    cout
    << "    // *VERIFY: getitem() does NOT find item after deltion..."
    << endl
    << "    // TEST3(): ItemType GetItem( ItemType Item, bool& found) const;"
    << endl
    << "    // ALL TEST PASSED!!"
    << endl << endl;
    
}



void test11()
// Put 1 item into the list: void PutItem(ItemType item);
// Verify that getitem it returns: true; GetItem( ItemType Item, bool& found) const;...
{
    
    cout
    << "// void test11()" << endl
    << "    // Put 1 item into the list: void PutItem(ItemType item);" << endl
    << "    // Verify that getitem it returns: true; GetItem( ItemType Item, bool& found) const;..." << endl
    << endl << endl;
    
    
    ItemType item;
    cout    << endl << "    // ItemType item..."
    << endl << endl;
    
    unsorted list;
    cout    << "    // unsorted list..."
    << endl << endl;
    
    cout
    << "    // Put 1 item into the list: void PutItem(ItemType item)..."
    << endl << endl;
    list.PutItem( item );
    
    cout
    << "    // Verify that getitem it returns: true"
    << endl << endl
    << "    // GetItem( ItemType Item, bool& found) const;..."
    << endl << endl;
    
    bool tell_the_truth =false;
    cout    << "    // bool tell_the_truth =false..."
    << endl << endl;
    
    list.GetItem( item, tell_the_truth );
    cout    << "    // list.GetItem( item, tell_the_truth: FALSE )..."
    << endl;
    
    assert( tell_the_truth == true);
    cout    << "    // PASSED: assert( tell_the_truth == TRUE )..."
    << endl << endl;
    
    cout
    << "    // void test11()" << endl
    << "    // Put 1 item into the list: void PutItem(ItemType item);" << endl
    << "    // Verify that getitem it returns: true; GetItem( ItemType Item," << endl
    << "       bool& found) const;..." << endl
    << "    // TEST10(): PASSED!!" << endl
    << endl << endl << endl;
    
    
}


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
        << endl << endl;
    }
    
    ItemType item;
    cout << endl << "   // ItemType item..." << endl;
    
    unsorted list;
    cout << "   // unsorted list..." << endl;
    
    cout << "   // TEST4(): void PutItem(ItemType item)..." << endl;
    list.PutItem( item );
    
    assert( list.GetLength() == 1 );
    cout
    << "    // TEST2(): int GetLength() const..." << endl
    << "    // assert( list.GetLength() == 1 ); CALLED..." << endl
    << "    // ASSERT(): PASSED!! " << endl
    << endl << endl;
    
    assert( list.IsFull() == false );
    cout
    << "    // TEST10(): bool IsFull() const..." << endl
    << "    // assert( list.IsFull() == false ); CALLED..." << endl
    << "    // ASSERT(): PASSED!! " << endl
    << endl << endl;
    
    cout
    << "    // TEST10(): // void PutItem(ItemType item);" << endl
    << "    // TEST10(): PASSED!!" << endl
    << endl << endl << endl;
    
}


void test6()
//: TEST6(): void ResetList();
{
    {
        cout
        << endl
        << "//: TEST6(): void ResetList();"
        << endl << endl << endl;
    }
    
}

// void test7()
//: ItemType GetNextItem();
//{
//}



void test5()
//: TEST5(): void DeleteItem(ItemType item);
{
    
    cout
    << endl
    << "//: TEST5(): void DeleteItem(ItemType item);"
    << endl << endl;
    
    unsorted list;
    cout
    << "    // unsorted list;"
    << endl
    << "    // CREATED!!"
    << endl << endl;
    
    
    ItemType item;
    cout
    << "    // ItemType item;"
    << endl
    << "    // CREATED!!"
    << endl << endl;
    
    list.DeleteItem(item);
    cout
    << "    // list.DeleteItem(item_is);"
    << endl
    << "    // CALLED..."
    << endl << endl;
    
    assert( list.GetLength() == 0 );
    cout
    << "    // assert( list.GetLength() == 0 );"
    << endl
    << "    // PASSED!!!"
    << endl << endl;
    
    cout
    << "    //: TEST5(): void DeleteItem(ItemType item);" << endl
    << "    // PASSED!!" << endl
    << endl << endl << endl;
    
}





void test4()
//: TEST4(): void PutItem(ItemType item);
{
    cout
    << "//: TEST4(): void PutItem(ItemType item);"
    << endl << endl;
    
    unsorted list;
    cout
    << "    // unsorted list;" << endl
    << "    // CREATED ..." << endl;
    
    ItemType item;
    cout
    << "    // ItemType item_is;" << endl
    << "    // CREATED ..." << endl;
    
    list.PutItem(item);
    cout
    << "    // list.PutItem(item);... " << endl
    << "    // CALLED ..." << endl;
    
    cout
    << "    //: TEST4(): void PutItem(ItemType item);"
    << "    // PASSED!!" << endl
    << endl << endl << endl;
    
    
    
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
    cout
    << "    // unsorted list;" << endl
    << "    // CREATED ..." << endl;
    
    ItemType item_is;
    cout
    << "    // ItemType item_is;" << endl
    << "    // CREATED ..." << endl;
    
    bool tell_the_truth =false;
    cout
    << "    // bool tell_the_truth =false: FALSE " << endl
    << "    // CREATED ..." << endl;
    
    list.GetItem( item_is, tell_the_truth );
    cout
    << "    // list.GetItem( item_is, tell_the_truth )... " << endl
    << "    // CALLED ..." << endl;
    
    assert( tell_the_truth == false);
    cout
    << "    // assert( tell_the_truth == false); CALLED..." << endl
    << "    // ASSERT(): PASSED!! " << endl
    << "    // TEST3(): PASSED!!" << endl
    << endl << endl << endl;
    
    
    
}


void test2()
//: TEST2(): int GetLength() const;
{
    cout
    << "//: TEST2(): int GetLength() const;" << endl
    << endl << endl;
    
    unsorted list;
    cout
    << "    // unsorted list;" << endl
    << "    // CREATED ..." << endl;
    
    assert( list.GetLength() == 0);
    cout
    << "    // assert( list.GetLength() == 0); CALLED..." << endl
    << "    // ASSERT(): PASSED!! " << endl
    << "    // TEST2(): PASSED!!" << endl
    << endl << endl << endl;
    
    
}



void test1()
//: TEST1(): bool IsFull() const;
{
    cout
        << "// TEST1(): bool IsFull() const;"
        << endl << endl;
    
    unsorted list;
    cout
        << "    // unsorted list;" << endl
        << "    // CREATED ..." << endl;

    assert( !list.IsFull() );
    cout
        << "    // assert( !list.IsFull() );"
        << endl
        << "    // TEST1(): PASSED!! "
        << endl << endl << endl;
    
}









