//
// Created by wikto on 29.05.2022.
//

#ifndef TRI_LIST_H
#define TRI_LIST_H


#include <string>

using namespace std;
struct List_element_t;


struct List_element_t {
    string key;
    List_element_t* next;
    List_element_t* previous;
};


class List {

private:
    List_element_t *head;
    List_element_t *tail;


public:

    List();

    void addFirst(string key);
    void pop_last();

    int size();

    void free_memory();


};



#endif //TRI_LIST_H
