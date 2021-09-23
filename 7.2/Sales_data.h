class Sales_data
{
    private:
        string bookNote;
        unsigned units_sold = 0;
        double sellingprice = 0.0;
        double saleprice=0.0;
        double discount=0.0;
    public:
        string isbn() const { return bookNote; }
        Sales_data& combine(const Sales_data&rhs){
            units_sold += rhs.units_sold;
            saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) 
            / (rhs.units_sold + units_sold);
            if(sellingprice!=0){
                discount = saleprice / sellingprice;
            }
            return *this;
        }
};