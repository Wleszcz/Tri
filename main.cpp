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

            Trie.printAll(0,word);

        }
    }

    return 0;
}
