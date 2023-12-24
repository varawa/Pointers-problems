#include<iostream>
#include<math.h>

using namespace std ;

void update(int **p) ;
//Why int *p = &value ?
//Reason 1 : You get to know what type of data it is .
//Reason 2 : You get to know how many bytes we have to consider . 

int main(){

    int i = 5 ;
    int *ptr1 = &i ;

    //Double Pointer :
    //Points to a pointer .
    //int is the data type of the memory we want to point towards .

    int **ptr2 = &ptr1 ;

    //Now : *ptr1 == i ; ptr1 == *ptr2 ; i == **ptr2 .

    cout<<"i = "<<i<<endl ;
    cout<<"ptr1 = "<<ptr1<<endl ;
    cout<<"*ptr1 = "<<*ptr1<<endl ;
    cout<<"ptr2 = "<<ptr2<<endl ;
    cout<<"*ptr2 = "<<*ptr2<<endl ;
    cout<<"**ptr2 = "<<**ptr2<<endl ;

    update(ptr2) ;
    cout<<"*ptr2 = "<<*ptr2<<endl ;
    return 0 ;
}

void update(int **p){

    //p = p + 1 ;                     //Won't work as it is pass by value .
    *p = *p + 1 ;                     //Works as it's pass by reference .
    **p = **p + 1 ;                   //Works as it's pass by reference .
    //Same reason as in the case of single pointer .

}