#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "Filescanner.h"
#include "Tokenizer.h"
using namespace std;
void Filescanner :: scanfiles(string s[],int size)
{
    vector <string> v;
    v.push_back("C:/Users/Admin/OneDrive/Desktop/FileSearchEngine/data/data.txt");
    v.push_back("C:/Users/Admin/OneDrive/Desktop/FileSearchEngine/data/data1.txt");
    for (int i=0;i<2;i++)
    {
        ifstream in (v[i]);
            string add;
            while(getline(in,add))
            {
                s[i]+=add;
                s[i]+=' ';
            }
            
        in.close();
    }
};
