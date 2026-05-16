#ifndef INDEXER_H
#define INDEXER_H
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;
class Indexer
{
    set<string>stop;
    unordered_map<string,unordered_map<string,int>> m;
    public:
    Indexer();
    void index_find(vector <string> & words,string &Filename);
    unordered_map <string,int> search(vector <string> &word);
    
};
#endif