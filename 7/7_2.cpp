#include<iostream>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data total("1",20,12.0);
    Sales_data  tmp("1",10,12.0);
    Sales_data tp1,tp2;
    total.combine(tmp);
    read(cin,tp1);
    while(read(cin,tp2))
    {
        if(tp1.isbn()==tp2.isbn())
        {
            tp1.combine(tp2);
            print(cout,tp1);
            break;
        }

    }
    print(cout,total);

}
