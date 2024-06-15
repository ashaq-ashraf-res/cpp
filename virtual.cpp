// Letus C how Virtual Function Works 

#include<iostream>
using namespace std;

class base
{
   public : 
   virtual void display()= 0;  // pure virtual function
};   // Class containing single pure virtual function is called abstract and objects cant be instaintiated from it 

// Letus create 2 drerived classes from it

class derived_first:public base
{

// we will define virtual function here
public:
 void display() override
 {
   cout<<endl<<"The first derived class called";
 }
};

class derived_second : public base
{
  
  public:

  void display() override
  {
   cout<<endl<<"Second derived function callled";
  }

};

int main()
{
   derived_second df;
   derived_first ds;

   base *bsptr;
   //base *dfptr;

   bsptr = &df;
   //dsptr = &ds;

   cout<<endl<<"Now Letus call first derived class function pointer ";

   bsptr->display();

   bsptr = &ds; 
   
   cout<<endl<<"Now Letus call second derived class function pointer ";

   bsptr->display();

   return 1;
}

