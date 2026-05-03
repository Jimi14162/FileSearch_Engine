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
        m[w][file_name]++;;
    }
      
}
unordered_map <string,int> Indexer :: search(string &word)
{
    if(m.find(word)!= m.end())
    {
        return m[word];
    }
    return {};
}