#include<iostream>
using namespace std;
unsigned int e,f;
unsigned int Day;
unsigned int Month;
unsigned int Year;

int main()
{
cout<<" Day = ";cin>>Day;
cout<<" Month = ";cin>>Month;
cout<<" Year = ";cin>>Year;
cout<<endl<<" (dd/mm//yy) = 1 ; (mm/dd/yy) =2 ";
int code;
cin>>code;
if (f==1) {
                     cout<<endl<<" French format "<<endl;
                     Day=Day<<27;
                     f=f|Day;
                     Month=Month<<23;
                     f=f|Month;
                     f=f|Day;
                     cout<<f;
                    }
else
if (e==2)  {
                     cout<<endl<<" English format "<<endl;
                     Month=Month<<28;
                     e=e|Month;
                     Day=Day<<23;
                     e=e|Day;
                     e=e|Year;
                     cout<<e;
                    }
else
{ cout<<endl<<" Sorry , no banans today !"; }
return  0;
}

