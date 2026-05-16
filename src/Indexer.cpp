#include<iostream>
#include<string>
#include<vector>
#include<Indexer.h>
#include<unordered_map>
#include<set>
using namespace std;
Indexer :: Indexer()
{
    //Articles
    stop.insert("a");
    stop.insert("an");
    stop.insert("the");
    //Prepositions
    stop.insert("in");
    stop.insert("on");
    stop.insert("at");
    stop.insert("by");
    stop.insert("from");
    stop.insert("to");
    //Helping Verbs
    stop.insert("is");
    stop.insert("are");
    stop.insert("was");
    stop.insert("were");
    stop.insert("be");
    //Conjuctions
    stop.insert("and");
    stop.insert("or");
    stop.insert("but");
    
}
void Indexer :: index_find(vector<string>&words,string &file_name)
{
    
    for(auto &w : words)
    {
        if(stop.find(w) == stop.end())
            m[w][file_name]++;
    }
}
unordered_map <string,int> Indexer :: search(vector <string >&word)
{
    unordered_map <string,int> temp;
    for(auto &w : word) 
    {
        if(m.find(w)!= m.end())
        {   
            for(auto &x : m[w])
            {
                temp[x.first]+=x.second;
            }
        }
    }
    return temp;
}