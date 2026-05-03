#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>
#include<set>
#include<cctype>

#include "Tokenizer.h"
#include "Filescanner.h"
#include "Indexer.h"

using namespace std;

int main()
{
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

    string lower;

    for(auto ch: s)
    {
        lower+=tolower(ch);
    }
    auto result = i1.search(lower);
    if(result.empty())
    {
            cout<<"Word not exist\n";
    }
    else
    {
        cout<<"Word found in : \n";
        for(auto &x : result)
        {
            string str=x.first;
            cout<<str.substr(str.find_last_of('/')+1)<<"("<<x.second<<" times )"<<endl;
        }
    }

    return 0;
}