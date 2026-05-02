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
        for(char ch : s[i])
        {
            ch=tolower(ch);
            if(isspace(ch)) 
            {
                no[i].v.push_back(str);
                str.clear();
            }
            else if(ispunct(ch) && (ch=='+' || ch=='#' || ch== '-' || ch=='_'))
            {
                str+=ch;
            }
            else if(isalnum(ch))
                str+=ch;
            else
                continue;
            
        }

    }
}
vector <string> Tokenizer :: get_tokens (int i)
{
    
    return no[i].v;

}


 
