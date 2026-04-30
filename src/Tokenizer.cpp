#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include<vector>
#include "Tokenizer.h"
using namespace std;
struct files
{
    vector <string> v;
};
struct files no[2];
void Tokenizer :: read(string s[],int size)
{
    
    string str;
    for(int i=0;i<size;i++)
    {
        int a=s[i].length();
        for(char ch : s[i])
        {
            if(ch==' ') 
            {
                no[i].v.push_back(str);
                str.clear();
            }
            else
                str+=ch;
            
        }
    }
}
void Tokenizer :: print(int size)
{
    for(int j=0;j<size;j++)
    {
        cout<<"Files"<<j+1<<" ";
        for(int i=0;i<no[j].v.size();i++)
        {
            cout<<no[j].v[i]<<"  ";
        }
        cout<<endl;

    }
}

 
