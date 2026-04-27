#include<iostream>
#include<fstream>
#include<string>
#include "Filescanner.h"
#include "Tokenizer.h"
using namespace std;
void Filescanner :: scanfiles(string &s)
{
    ifstream in=ifstream("C:/Users/Admin/OneDrive/Desktop/FileSearchEngine/data/data.txt");
        getline(in,s);
};
