#include <iostream>
#include <istream>
#include <fstream>
#include <cctype>
#include <string>
//#include <map>

#include "map.HPP"
#include "node.HPP"

using namespace std;
using namespace ANTHONY_NASH_ASSIGNMENT_4;

const int  MAXIMUM_WORD_LENGTH =20;




int main()
{
    system ( "clear" );
    
    //OPEN INPUT FILE...
    
    ifstream data("/Volumes/C02NT1HRG3QG USER.DATA_GOOG_DRIVE/ACCOUNTS.C02NT1HRG3QG/CIS.C02NT1HRG3QG/DOCUMENTS CIS.C02NT1HRG3QG/LABS.CIS/LABS CIS.279/REPO.CIS.279/Assignment -04- Recursion and Trees Application – Building a Word Index, CIS.279/index.in.txt");// opening the file...
    
    if ( data.fail() )// error checking; if the file is open...
    {
        cerr << "ERRO: opening file; exit(1); "; exit(1);
    }
    
    
    
    //READING FROM INPUT FILE...
    
    //int index =0;
    int word_counter=0;
    //map<string, int> word_map;
    
    char letter;
    //char letter;
    //string word [ MAXIMUM_WORD_LENGTH ];
    string word;
    map word_object;
    
    while ( !data.eof() )
    {
        
        data.get( letter );
        
        if ( letter == '\'' )
        {
            word += letter;
        }
        if ( isalpha(letter) ==true )
        {
            word += static_cast<char>( tolower(letter) );
        }
        if ( (isalpha(letter) ==false) && (letter != '\'') && (word.empty() == false) )
        {
            word_counter++;
            //cout << buffer << " ";
            int count = word_object.get( &letter );
            word_object.set( &letter , count + 1);
            word = "";
        }
        
    }
    

//    word_object.print();
    
    cout  << endl << endl
    // << "* TEST: int index == " << index << endl
    << "// *TEST: words_counter == " << word_counter << endl
    // << "* TEST: previous_space (0=False / 1=True): " << previous_space
    << endl << endl << endl;
    
    data.close();

    
    
    return 0;
}
