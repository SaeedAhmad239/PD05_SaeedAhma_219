#include<iostream>
using namespace std;
float PyramidVolume(float,float,float,string);
main()
{
    float length, width, height,volume;
    string unit;
    cout<<"Enter length inmeters";
    cin>>length;
    cout<<"Enter width in meters";
    cin>>width;
    cout<<"Enter height in meters";
    cin>>height;
    cout<<"Enter desired input unit: millimeter(mm), centimeter(cm), meter(m) ,kilometer(km)";
    cin>>unit;
    volume=PyramidVolume(length,width,height,unit);
    cout<<"Volume is "<<volume;
}
float PyramidVolume(float length,float width,float height,string unit)
{
    float volume;
    volume = (length*width*height)/3;
    if(unit=="cm")
    volume=volume*100;
    if(unit=="mm")
    volume=volume*1000;
    if(unit=="km")
    volume=volume/1000;
    if(volume=="m")
    volume=volume;
    return volume;
}