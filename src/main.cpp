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
#include<algorithm>
using namespace std;
bool compare(pair<string,int> a,pair<string,int> b) 
{
    return a.second>b.second;
}
int main()
{
    vector<pair<string,int>> vec ;
    vector <string> file_name;
    vector <string> finding;
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
    int len;

    for(auto ch: s)
    {
        lower+=tolower(ch);
        if(isspace(ch))
        {
            len=lower.length();
            finding.push_back(lower);
            lower.erase(0,len);
        }
    }
    finding.push_back(lower);
    auto result = i1.search(finding);
    for(auto & x : result)
    {
        vec.push_back(x);
    }

    sort(vec.begin(),vec.end(),compare);

    if(vec.empty())
    {
            cout<<"Word not exist\n";
    }
    else
    {
        cout<<"Word found in : \n";
        for(auto &x : vec)
        {
            string str=x.first;
            cout<<str.substr(str.find_last_of('/')+1)<<"("<<x.second<<" times )"<<endl;
        }
    }

    return 0;
}