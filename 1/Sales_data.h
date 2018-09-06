#ifndef SALESITEM_H
// we're here only if SALESITEM_H has not yet been defined
#define SALESITEM_H

// Definition of Sales_item class and related functions goes here
#include <iostream>
#include <string>
class Sale_data
{
public:
    string isbn() const { return bookNo}
private:
    std::string bookNo;      // implicitly initialized to the empty string
    unsigned units_sold;
    double revenue;
}
