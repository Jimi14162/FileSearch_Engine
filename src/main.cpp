#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "Tokenizer.h"
#include "Filescanner.h"
using namespace std;
int main()
{
    string s;
    string store[2];
    Filescanner f1;
    Tokenizer t1;
    f1.scanfiles(store,2);
    t1.read(store,2);
    t1.print(2);
    return 0;

}