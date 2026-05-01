#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#ifndef TOKENIZER_H
#define TOKENIZER_H
class Tokenizer
{
    public:
    void read(string s[],int size);
    vector <string> get_tokens(int i);
    

};

#endif