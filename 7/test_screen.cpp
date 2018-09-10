#include<iostream>
#include"Screen.h"
using namespace std;
int main()
{
    Screen item(5,5,'X');
    item.display();
    item.move(4,0).set('#').display();
    item.display();
}
