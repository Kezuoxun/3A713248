#include<iostream>
using namespace std;

int main()
{  int year;
   cout << "Please enter a year:" << endl;
   cin >> year ;
       if(year%4==0)
        {
             cout << "�褸" << year << "�~�O�|�~" << endl;            
        } 
   
         if(year%4!=0)
          {
               cout << "�褸" << year << "�~���O�|�~" << endl;            
          } 
    system("pause");
    return 0;
}                                                                     
