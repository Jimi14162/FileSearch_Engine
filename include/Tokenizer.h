#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
#ifndef TOKENIZER_H
#define TOKENIZER_H
class Tokenizer
{
    int size1;
    vector <string> v;
    vector <vector<string>> v1;
    public:
    void read(string *s,int size);
    vector <string> get_tokens(int i);
    

};

#endif