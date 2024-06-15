#include<iostream>
using namespace std;

int main()
{
    int intvar;
    float flovar;

    int* ptrint;
    float* ptrflo;

    void* ptrvoid;

    // Assign values to pointer variables

    ptrint = &intvar;
    ptrflo = &flovar;

    cout<<endl<<ptrint <<endl<<ptrflo;
    /* I cant do this thing
    ptrint = &flovar ;
    ptrflo = &intvar;*/

    ptrvoid = &intvar;
    cout<<endl<<ptrvoid;
    ptrvoid = &flovar;cout<<endl<<ptrvoid;
    cout<<endl<<ptrvoid;
    return 0;


}