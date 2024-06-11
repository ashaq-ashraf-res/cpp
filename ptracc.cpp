// Access content based on address of variable or 
 // Access content through pointer variable

 #include<iostream>
 using namespace std;

 int main()
 {
    int var1 = 11 ;
    int var2 = 22 ; // declartion  and intialization of vars

    int *ptr;   // pointer to integer

    ptr = &var1 ;

    cout << endl<< *ptr ;

    ptr = &var2;
    cout<< endl << *ptr ;

    return 0;

 }