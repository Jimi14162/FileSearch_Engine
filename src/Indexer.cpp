#include<iostream>
#include<string>
#include<vector>
#include<Indexer.h>
#include<unordered_map>
using namespace std;

void Indexer :: index_find(vector<string>&words,string &file_name)
{
    
    for(auto &w : words)
    {
        m[w][file_name]++;
    }
    
      
}
unordered_map <string,int> Indexer :: search(vector <string >&word)
{
    for(auto &w : word)
    if(m.find(w)!= m.end())
    {
        return m[w];
    }
    return {};
}