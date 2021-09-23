#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>//类中用到的变量名空间，一定要有相应的头文件


using namespace std;

class Sales_data
{
    public:
        friend ostream& operator<<(ostream &, Sales_data &);
        friend istream& operator>>(istream &, const Sales_data &);
    
    public:
        string isbn() const { return bookNo; }
        Sales_data& combine(const Sales_data &rhs){

            saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);
            units_sold += rhs.units_sold;
            //revenue += rhs.revenue;
            
            if(sellingprice!=0){
                discount = saleprice / sellingprice;
            }
            return *this;
        }
       
    //仅进行了用到的变量的声明初始化
    public:
        string bookNo;
        unsigned units_sold = 0;
        double sellingprice = 0.0;
        double saleprice = 0.0;
        double discount = 0;
        //double revenue = 0;
};  //类的定义后面一定要有;

istream& operator>>(istream &is,Sales_data&item){
    //直接读取值的部分
    is >> item.bookNo >> item.units_sold  >>item.sellingprice >>item.saleprice;
    //下面discount和revenue是需要计算的得到的，与上面不同
    -vif(item.sellingprice!=0){
        item.discount = item.saleprice / item.sellingprice;
    } 
    //item.revenue=item.units_sold * item.saleprice;
    return is;
}

ostream& operator<<(ostream &os,const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice;
    return os;
}

#endif