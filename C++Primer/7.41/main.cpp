#include<iostream>
#include<string>

using namespace std;

class Sale_data
{
    friend istream &read(istream &is, Sale_data &item);
    friend ostream &print(ostream &os, const Sale_data &item);
    public:
        Sale_data(const string &book,unsigned num,double sellp,double salep)
        :bookNo(book),units_sold(num),sellingprice(sellp),saleprice(salep)
        {
            if(sellingprice)
                discount=saleprice/sellingprice;
            cout << "此构造函数接受书名、销售量、原价、实际售价四个信息" << endl;
        }

        Sale_data():Sale_data("",0,0,0){
            cout << "此构造函数无需接受任何信息" << endl;
        }

        Sale_data(const string &book):Sale_data(book,0,0,0){
            cout << "此构造函数接受书号信息" << endl;
        }

        Sale_data(istream &is):Sale_data(){
            read(is, *this);
            cout << "此构造函数接受用户的输入" << endl;
        }

    private:
        string bookNo;
        unsigned units_sold = 0;
        double sellingprice = 0;
        double saleprice = 0;
        double discount = 0;
};

istream &read(istream &is,Sale_data &item){
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    return is;
}
ostream &print(ostream &os, const Sale_data &item){
    os << item.bookNo << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice<< " "<<item.discount;
    return os;
}

int main(){
    Sale_data fist("wwwwww", 85, 128, 109);
    Sale_data second;
    Sale_data third("hhhhhhh");
    Sale_data last(cin);
    return 0;
}
    