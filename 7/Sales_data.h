#ifndef SALES_DATA_H
#define SALES_DATA_H

// Definition of Sales_item class and related functions goes here
#include <iostream>
#include <string>
class Sales_data
{

    friend std::istream& operator>>(std::istream&,Sales_data&);
    friend std::istream &read(std::istream&, Sales_data&);
    friend std::ostream &print(std::ostream&, const Sales_data&);
public:

    Sales_data():bookNo(""),units_sold(0), revenue(0.0) { }

	Sales_data(const std::string &s):
	           bookNo(s), units_sold(0), revenue(0.0) { }
	Sales_data(const std::string &s, int n, double p):
	           bookNo(s), units_sold(n), revenue(p*n) { }
	Sales_data(std::istream &);
public:
    std::string isbn() const { return bookNo;}
    Sales_data& combine(const Sales_data&);
private:
    std::string bookNo;      // implicitly initialized to the empty string
    int units_sold=0;
    double revenue=0.0;
};
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold+=rhs.units_sold;
	revenue+=rhs.revenue;
	return *this;
}
std::ostream &print(std::ostream &os,const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold
        << " " << item.revenue;
    return os;
}
std::istream &read(std::istream &is,Sales_data &item)
{
    double price=0.0;
    is>>item.bookNo>>item.units_sold>>price;
    item.revenue=price*item.units_sold;
    return is;
}
#endif
