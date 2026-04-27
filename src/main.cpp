#include<iostream>
#include<fstream>
#include<string>
#include "Tokenizer.h"
#include "Filescanner.h"
using namespace std;
int main()
{
    string s;
    Filescanner f1;
    Tokenizer t1;
    f1.scanfiles(s);
    t1.read(s);

    return 0;

}