#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>
#include<set>
#include "Tokenizer.h"
#include "Filescanner.h"
#include "Indexer.h"
using namespace std;

int main()
{
    set<string> name;
    vector <string> file_name;
    string s;
    string store[3];

    Filescanner f1;
    Tokenizer t1;
    Indexer i1;
    
    for(int i=0;i<3;i++)
    {
        file_name.push_back(f1.scanfiles(store, i));
        
    }
    t1.read(store, 3);

    
    for(int i=0;i<3;i++)
    {
        vector <string> words=t1.get_tokens(i);
        i1.index_find(words,file_name[i]);
    }
    
   
    cout << "Enter Finding Word : ";
    getline(cin, s);

    auto result = i1.search(s);
    if(result.empty())
    {
            cout<<"Word not found\n";
    }
    else
    {
        for(auto &x : result)
        {
            cout<<x<<endl;
        }
    }
    return 0;
}