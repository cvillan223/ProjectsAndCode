#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <string>
#include <list>
#include <iostream>
#include "DictEntry.h"

using namespace std;

class dictionary
{
public:
    //typedef string wordType;
    dictionary();

    /*Searches the list starting at the front of the list and moving to the back
     Returns the number of searches it took to find the findString, or a -1 if not found*/
    int searchForward(list<DictEntry>& wordList, wordType findString);

    /*Searches the list starting at the back of the list and moving to the front
     Returns the number of searches it took to find the findString, or a -1 if not found*/
    int searchBackward(list<DictEntry>& wordList, wordType findString);

    /*Prints the list of words in reverse alphabetic order to a file*/
    void revPrintList(ofstream& output, list<DictEntry>& wordList);

};


#endif /* dictionary_h */