#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    vector<string>q;
    string infile="1.txt";
    ifstream in(infile);
    if(in)
    {
        string line,word;
        while(getline(in,line))
        {
            istringstream record(line);
            while(record>>word)
            {
                cout<<word<<" ";
            }
            cout<<endl;
        }

    }

}

