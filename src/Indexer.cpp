#include<iostream>
#include<string>
#include<vector>
#include<Indexer.h>
#include<set>
#include<unordered_map>
using namespace std;
void Indexer :: index_find(vector<string>&words,string &str)
{
    for(auto &w : words)
    {
        m[w].insert(str);
    }
      
}
set <string> Indexer :: search(string &word)
{
    if(m.find(word)!= m.end())
    {
        return m[word];
    }
    return {};
}