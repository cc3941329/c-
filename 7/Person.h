#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
class Person
{
public:
    Person():Name(""),Address("");
    Person(const std::string &n,const std::string &a):Name(n),Address(s);
public:
    std::string get_name() const {return Name;}
    std::string get_address() const {return Address;}
private:
    std::string Name;
    std:string Address;
};
