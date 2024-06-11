/* The address of operator 
variable declare three things 1. name 2. content 3. &address in memory 
int x = 20 ;  x is name ,20 is content ,&x gives address of variable
*/

#include<iostream>
using namespace std;
int main()
{
  int var1  = 11 ;
  int var2  = 22 ;
  int var3  = 33 ;  // three variables declared and inialized

  cout << endl << &var1 ;
  cout << endl << &var2 ;
  cout << endl << &var3 ;

  return 0;

}
 
