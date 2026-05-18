#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
#ifndef FILESCANNER_H
#define FILESCANNER_H

class Filescanner
{
    string folder_path;
    vector <string> v;
    public:
    int get_path();
    string scanfiles(string s[],int itr);
};
#endif 
