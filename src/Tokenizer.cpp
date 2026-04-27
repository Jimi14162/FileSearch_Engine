#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include "Tokenizer.h"
using namespace std;
void Tokenizer :: read(string &s)
{
    int a=s.length();
    for( int i=0;i<a;i++ )
    {
        for(char ch : s)
        {
            if(i==a)
                break;
            else if(isalpha(ch))
                cout<<ch;
            else
                cout<<endl;
            i++;
        }
    }
}

 
