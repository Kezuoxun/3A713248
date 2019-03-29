#include<iostream>
using namespace std;

int main()
{  int year;
   cout << "Please enter a year:" << endl;
   cin >> year ;
       if(year%4==0)
        {
             cout << "西元" << year << "年是閏年" << endl;            
        } 
   
         if(year%4!=0)
          {
               cout << "西元" << year << "年不是閏年" << endl;            
          } 
    system("pause");
    return 0;
}                                                                     
