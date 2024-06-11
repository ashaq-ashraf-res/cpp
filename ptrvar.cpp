#include<iostream>
using namespace std;

int main()
{
     int var1 = 11 ;
     int var2 = 22 ;

     cout << endl << &var1  << endl << &var2 ;

     int *ptr ;   // pointer to integer 

     ptr =  &var1 ;
     cout << "COntent of pointer variable---"<<ptr ;

     ptr = &var2 ;
     cout <<"content of pointer varible ---"<<ptr;

     return 0;


}