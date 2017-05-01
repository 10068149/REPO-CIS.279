#include <iostream>
#include <istream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    system ( "clear" );
    
    //Open input file...
    ifstream data("/Volumes/C02NT1HRG3QG USER.DATA_GOOG_DRIVE/ACCOUNTS.C02NT1HRG3QG/CIS.C02NT1HRG3QG/DOCUMENTS CIS.C02NT1HRG3QG/LABS.CIS/LABS CIS.279/REPO.CIS.279/Assignment -04- Recursion and Trees Application – Building a Word Index, CIS.279/index.in.txt");// opening the file...
    
    if ( data.fail() )// error checking; if the file is open...
    {
        cerr << "ERRO: opening file; exit(1); "; exit(1);
    }
    
    
    
    //Reading from input file...
    
    const int  MAXIMUM_WORD_LENGTH =20;
    int index =0;
    int word_counter=0;
    
    char character;
    //char letter;
    //string word [ MAXIMUM_WORD_LENGTH ];
    
    bool previous_space = false;
    
    while ( !data.eof() )
    {
        
        data.get(character);
        
        if ( isspace(character) && previous_space ==false )
        {
            word_counter++;
        }
        
        previous_space = isspace(character);
        
        cout << character;

    }
    
    cout  << endl << endl
    // << "int index == " << index << endl
    << "words_counter == " << word_counter << endl
    << "previous_space (0=False / 1=True): " << previous_space
    << endl << endl << endl;
    
    data.close();
    
    
    
    //Open output file...
    // Get file label
    // Print file label on output file
    // Get minimum character length
    // Set characters to GetString(input file)
    
    
    return 0;
}
