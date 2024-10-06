#include<iostream>
using namespace std;
int check1(int);
int check2(int);
int check3(int);
int ProjectTimeCalculation(int,int);
main()
{
    int days , Project_Hours , Workers,TotalHours,Time_Left;
    cout<<"Enter hours needed to comlete project";
    cin>>Project_Hours;
    Project_Hours=check1(Project_Hours);
    cout<<"Enter Number of days";
    cin>>days;
    days=check2(days);
    cout<<"Enter number of workers";
    cin>>Workers;
    Workers=check3(Workers);
    TotalHours=ProjectTimeCalculation(days,Workers);
    if(TotalHours<=Project_Hours)
    cout<<"NO! "<<Project_Hours-TotalHours<<" hours needed";
    if(TotalHours>=Project_Hours)
    cout<<"Yes! "<<TotalHours-Project_Hours<<" hours left";
}
int check1(int Project_Hours)
{
    while(Project_Hours>=200000)
       {
        cout<<"Please enter valid digit"<<endl;
        cout<<"Enter hours needed to comlete project";
        cin>>Project_Hours;
       }
        return Project_Hours;
}
int check2(int days)
{ 
    while(days>=20000)
       {
        cout<<"Please enter valid digit"<<endl;
        cout<<"Enter hours needed to comlete project";
        cin>>days;
       }
        return days;
}
int check3(int Workers)
{
while(Workers>=200)
       {
        cout<<"Please enter valid digit"<<endl;
        cout<<"Enter number of workers";
        cin>>Workers;
       }
        return Workers;

}
int ProjectTimeCalculation(int days,int Workers)
{
    int TotalHours=(days*10);
    int Training=(TotalHours*10)/100;
    TotalHours=TotalHours-Training;
    TotalHours=TotalHours*Workers;
    return TotalHours;

}