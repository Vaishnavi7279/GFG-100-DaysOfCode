<<<<<<< HEAD
//DSA C++
//Linear Data Structure - 1D Array
//time complexity generally O(n) ; depends on the operation
//space complexity O(1)
#include<iostream>
using namespace std;
int main()
{
    int size;
    int array1[5]; //declaration
    array1[5]={1,2,3,4,5}; //allocation and initialization
    cout<<"Array1: "<<array1;
    cout<<endl<<"Enter the size: ";
    cin>>size;
    int array2[size];
    for(int i=0 ; i<size ; i++) //looping
       cin>>array2[i];
    for(int i=0 ; i<size ; i++) //looping
       cout<<"Element at "<<i<<" index= "<<array2[i]<<endl;
    return 0;
=======
//DSA C++
//Linear Data Structure - 1D Array
//time complexity generally O(n) ; depends on the operation
//space complexity O(1)
#include<iostream>
using namespace std;
int main()
{
    int size;
    int array1[5]; //declaration
    array1[5]={1,2,3,4,5}; //allocation and initialization
    cout<<"Array1: "<<array1;
    cout<<endl<<"Enter the size: ";
    cin>>size;
    int array2[size];
    for(int i=0 ; i<size ; i++) //looping
       cin>>array2[i];
    for(int i=0 ; i<size ; i++) //looping
       cout<<"Element at "<<i<<" index= "<<array2[i]<<endl;
    return 0;
>>>>>>> d0b563efb883899e01290b3d059a582c0171e02b
}