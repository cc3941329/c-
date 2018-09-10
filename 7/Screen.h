#include<iostream>
#include<stdio.h>
class Screen
{
public:
    typedef std::string::size_type pos;
    Screen()=default;
    Screen(const pos ht,const pos wd):height(ht),width(wd),contents(ht*wd,' '){}
    Screen(const pos ht,const pos wd,const char c):height(ht),width(wd),contents(ht*wd,c){}
    Screen &move(const pos r,const pos col)
    {
        cursor=r*width+col;
        return *this;
    }
    Screen &set(const pos r,const pos col,const char ch)
    {
        contents[r*width+col]=ch;
        return *this;
    }
    Screen &set(const char ch)
    {
        contents[cursor]=ch;
        return *this;
    }
    void display()
    {
        std::cout<<contents<<std::endl;
    }

private:
    pos cursor=0;
    pos height=0,width=0;
    std::string contents;
};
