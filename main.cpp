#include <iostream>
#include "string"
#include "Node.h"
using namespace std;


int main() {
    char command;

    string word,translation;

    Node Trie;

    while(cin>>command){

//        scanf(" %s",&word);
            cin>>word;

        if(command=='+'){
//            scanf(" %s",&translation);
                cin>>translation;

                Trie.add(0,word,translation);

        }
        else if(command=='?'){
            cout << Trie.find(0,word) << endl;
        }
        else if(command=='*'){
            List * result = new List;
            Trie.printAll(result,0,word);
            for (int i = 0; i < result->size()+2; i++) {
                result->pop_last();
            }

            result->free_memory();
        }
    }

    return 0;
}
