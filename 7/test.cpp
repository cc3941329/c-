
#include<iostream>
#include<vector>
using namespace std;

class NoDefault{  //NoDefault没有默认构造函数，编译器也不会为其合成一个。
public:
    //NoDefault()=default;
    NoDefault( int i ) : val( i ) { }
    void print(){cout<<val<<endl;}
private:
    int val;
};

class C{
public:
    C( int m = 0 ) : mem( m ) { }

private:
    int mem;
};
int main()
{
    vector<C>vec(10);
    vector<NoDefault>vec1(10,1);
    for(int i=0;i<10;i++)
    {
        vec1[i].print();
    }
}
