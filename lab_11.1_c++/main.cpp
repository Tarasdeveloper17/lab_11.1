#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void CreateBIN(char* fname)
{
 ofstream fout(fname, ios::binary);
 string s;
    cin.get();
    cin.sync();
 cout << "enter line: "; getline(cin, s);
 for (unsigned i=0; i<s.length(); i++)
 fout.write((char*)&s[i], sizeof(s[i]));
 cout << endl;
}
void PrintBIN(char* fname)
{
 ifstream fin(fname, ios::binary);
 char c;
 while ( fin.read((char*)&c, sizeof(c) ))
 {
 cout << c << endl;
 }
 cout << endl; }
void ProcessBIN1(char* fname, char* gname)
{
 ifstream f(fname, ios::binary);
 ofstream g(gname, ios::binary);
 char c;
string str = "informatika";
 while ( f.read((char*)&c, sizeof(c) ))
 {
     for(int i = 0; i < str.length(); i++)
     {
         if (c == str[i])
             g.write((char*)&c, sizeof(c));
     }
     
 }
    
    
}


int main()
{
    char fname[100]; 
    cout << "enter file name first: "; cin >> fname;
    CreateBIN(fname);
    PrintBIN(fname);
    char gname[100];
    cout << "enter file name second: "; cin >> gname;
    ProcessBIN1(fname, gname);
    PrintBIN(gname);
 
 return 0;
}
