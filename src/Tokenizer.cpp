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
struct files no[3];
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
vector <string> Tokenizer :: get_tokens (int i)
{
    
    return no[i].v;

}


 
