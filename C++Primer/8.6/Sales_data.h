#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<ostream>
#include<istream>
#include<string>

using namespace std;

class Sales_data
{
    public:
        friend ostream &print(ostream &, const Sales_data &);
        friend istream &read(istream &, Sales_data &);
    
    public :
        Sales_data() = default;
        Sales_data(const string &book):bookNo(book){}
        Sales_data(const string &book, const unsigned num, const double sellp, const double salep);
        Sales_data(istream &is);
    public:
        string isbn() const { return bookNo; }
        Sales_data& combine(const Sales_data &rhs){

            saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);
            units_sold += rhs.units_sold;
            revenue += rhs.revenue;
            
            if(sellingprice!=0){
                discount = saleprice / sellingprice;
            }
            return *this;
        }

    public:
        string bookNo;
        unsigned units_sold = 0;
        double sellingprice = 0.0;
        double saleprice = 0.0;
        double discount = 0.0;
        double revenue = 0;
};
Sales_data::Sales_data(const string & book, const unsigned num, const double sellp, const double salep)
{
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;

    if(sellingprice!=0){
        discount = saleprice / sellingprice;
    }
}

Sales_data::Sales_data(istream &is){
    //is >> *this;
    read(is, *this);
}

ostream &print(ostream &os,const Sales_data &item){
    os << item.bookNo << " " << item.units_sold << " " << item.saleprice <<" "<<item.sellingprice<< " " << item.discount;
    return os;
}

istream &read(istream &is,Sales_data&item){
    is >> item.bookNo >> item.units_sold  >>item.sellingprice >>item.saleprice;
    if(item.sellingprice!=0){
        item.discount = item.saleprice / item.sellingprice;
    } 
    return is;
}

#endif