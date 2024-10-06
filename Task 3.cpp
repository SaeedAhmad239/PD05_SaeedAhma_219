#include<iostream>
using namespace std;
float amount(string , float);
main()
{
    float TaxRate,price,TotalPrice;
    string type;
    cout<<"Enter vehical type";
    cin>>type;
    cout<<"Enter price of vehicla";
    cin>>price;
    TotalPrice=amount(type,price);
    cout<<"The final price of vehical "<<type <<"is "<<TotalPrice<<" after adding tax.E";
}
float amount(string type, float price)
{
    float tax;
    if(type=="M")
    tax=(price*6)/100;
    if(type=="E")
    tax=(price*8)/100;
    if(type=="S")
    tax=(price*10)/100;
    if(type=="V")
    tax=(price*12)/100;
    if(type=="T")
    tax=(price*15)/100;
    price=price+tax;
    return price;
}