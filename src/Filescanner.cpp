#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<filesystem>
#include "Filescanner.h"
#include "Tokenizer.h"
using namespace std;
namespace fs = std :: filesystem;

int Filescanner :: get_path()
{
    cout<<"Enter Full Path of folder : ";
    getline(cin,folder_path);
    int count=0;
    for(auto &file : fs :: directory_iterator(folder_path))
    {
        if(file.path().extension() == ".txt")
        {
            count++;
        }
    }
    return count;
}
string Filescanner :: scanfiles(string s[],int itr)
{
    for(auto &file : fs :: directory_iterator(folder_path))
    {
        if(file.path().extension() == ".txt")
        {
            v.push_back(file.path().string());
        }
    }
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