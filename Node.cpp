//
// Created by wiktor on 29.05.2022.
//
#define ALPHABET_SIZE 26

#include <iostream>
#include "Node.h"


Node::Node() {
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        array[i]= nullptr;
    }
}

bool Node::exists(char c) {

    if (array[c-'a']!= nullptr){
        return true;
    }
    return false;
}

void Node::add(int letter,const string& word,const string& newTransaltion) {
    if(word.size()-letter==0){
        this->translation=newTransaltion;

    }
    else{
        if(array[word[letter]-'a']==NULL){
            array[word[letter]-'a']=new Node;
        }
        this->array[word[letter]-'a']->add(letter+1,word,newTransaltion);
    }
}

 string Node::find(int letter, const string &word) {
    if(word.size()-letter==0){
        if(this->translation==""){
            return "-";
        }
        else{
            return this->translation;

        }
    }
    else{
        if(array[word[letter]-'a']== nullptr){
            return "-";
        }
        return this->array[word[letter]-'a']->find(letter+1,word);
    }
}

void Node::printAll(int letter, const string &word) {
    if(word.size()-letter==0){
        if(this->translation!=""){
            //cout<<translation<<endl;
        }
        for (int i = 0; i < ALPHABET_SIZE; ++i) {
            if(array[i]!= nullptr){
                if(array[i]->translation!=""){

                    cout<<array[i]->translation<<endl;
                }
            }
        }

        for (int i = 0; i < ALPHABET_SIZE; ++i) {
            if(array[i]!= nullptr){
                array[i]->printAll(letter,word);
            }
        }
    }
    else{
        if(array[word[letter]-'a']!= nullptr){
            this->array[word[letter]-'a']->printAll(letter+1,word);
        }
    }
}
