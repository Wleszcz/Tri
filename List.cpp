//
// Created by wikto on 29.05.2022.
//


#include <iostream>
#include "List.h"


List::List() {
    head = NULL;
    tail = NULL;
};



void List::pop_last() {
    if (head->next == NULL) {
        cout << head->key<<"e" << endl;
        head = NULL;
        tail = NULL;
    }
    else {
        List_element_t* element =  ( tail->previous);
        cout << element->next->key << endl;
        free(element->next);
        element->next = NULL;
        tail = element;
    }

    if ((head->next != NULL) && head->next->next == NULL) {
        cout << head->key << endl;
    }
}



void List::free_memory() {
    List_element_t* tmp = head;
    List_element_t* tmp2;

    while (tmp != NULL)
    {
        tmp2 = tmp->next;
        delete tmp;
        tmp = tmp2;
    }

}

int List::size(){
    List_element_t* element = head;
    int count = 0;
    while (element != NULL) {
        count++;
        element=element->next;
    }
    return count;
}

void List::addFirst(string key) {

    List_element_t* newNode = new List_element_t();
    newNode->key = key;
    newNode->next = head;
    if(head!=NULL){
        head->previous=newNode;
    }

    head = newNode;


    if(head->next==NULL){
        tail=head;
    }
    else if(head->next->next==NULL){
        tail->previous=head;
    }
}
