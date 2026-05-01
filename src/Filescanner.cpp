#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "Filescanner.h"
#include "Tokenizer.h"
using namespace std;
vector <string> v;
string Filescanner :: scanfiles(string s[],int itr)
{
    
    v.push_back("C:/Users/Admin/OneDrive/Desktop/FileSearchEngine/data/data.txt");
    v.push_back("C:/Users/Admin/OneDrive/Desktop/FileSearchEngine/data/data1.txt");
    v.push_back("C:/Users/Admin/OneDrive/Desktop/FileSearchEngine/data/data2.txt");
        ifstream in (v[itr]);
            string add;
            while(getline(in,add))
            {
                s[itr]+=add;
                s[itr]+=' ';
            }
            
        in.close();
        return v[itr];
    
   
};