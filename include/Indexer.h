#ifndef INDEXER_H
#define INDEXER_H
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;
class Indexer
{
    unordered_map<string,unordered_map<string,int>> m;
    public:
    void index_find(vector <string> & words,string &Filename);
    unordered_map <string,int> search(string &word);
    
};
#endif