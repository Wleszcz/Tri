//
// Created by wiktor on 29.05.2022.
//
#define ALPHABET_SIZE 26

#ifndef TRI_NODE_H
#define TRI_NODE_H
#include "string"


using namespace std;

class Node {

public:
    Node* array[ALPHABET_SIZE];
    string translation;


    Node();

    bool exists(char c);

    void add(int letter, const string &word,const string &newTranslation);

    string find(int letter, const string &word);

    void printAll( int letter, const string &word);
};


#endif //TRI_NODE_H
