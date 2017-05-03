#include <iostream>
#include <istream>
#include <fstream>
#include <cctype>
#include <string>
#include <map>

using namespace std;
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
    
    int index =0;
    int word_counter=0;
    map<string, int> word_map;
    
    char letter;
    //char letter;
    //string word [ MAXIMUM_WORD_LENGTH ];
    string buffer;
    
    while ( !data.eof() )
    {
        
        data.get( letter );
//        static_cast<char>(tolower(letter));
//        cout << static_cast<char>(tolower(letter)) << " | ";
        
        if ( letter == '\'' )
        {
            buffer += letter;
        }
        if ( isalpha(letter) ==true )
        {
            buffer += static_cast<char>( tolower(letter) );
        }
        if ( (isalpha(letter) ==false) && (letter != '\'') && (buffer.empty() == false) )
        {
            //word_counter++;
            //cout << buffer << " ";
            word_map[buffer]++;
            buffer = "";
        }
        
    }
    

    for (auto elem : word_map)
    {
        cout << elem.first << " = " << elem.second << " | ";
    }
    
    cout  << endl << endl
    // << "* TEST: int index == " << index << endl
    << "// *TEST: words_counter == " << word_counter << endl
    // << "* TEST: previous_space (0=False / 1=True): " << previous_space
    << endl << endl << endl;
    
    data.close();

    
    
    
    //OPEN OUTPUT FILE...
    // GET FILE LABEL...
    // PRINT FILE LABEL ON OUTPUT FILE...
    // GET MINIMUM CHARACTER LENGTH...
    // SET CHARACTERS TO GETSTRING(INPUT FILE)...

    
    
    return 0;
}
