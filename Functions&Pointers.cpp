#include<iostream>
#include<math.h>

using namespace std ;
void print(int *p) ;
int update(int *p) ;
int updatev(int *p) ;

int main(){
    
    int value = 5 ;
    int *ptr = &value ;
    print(ptr) ;
    update(ptr) ;

    //Even after applying the update function , the value of ptr stays the same . This is because  of how pointers are being passed to the update function. 
    //When you pass a pointer to a function in C++, you are passing a copy of the pointer, not the original pointer itself. This is known as passing by value.                                                    
    //In the update function, you receive a copy of the pointer c. You then increment this local copy of the pointer p by 1. 
    //This modification only affects the local copy of the pointer p within the update function, not the original pointer c in the main function.

    cout<<"ptr = "<<ptr ;
    return 0 ;

}

void print(int *p){

    cout<<"*ptr = "<<*p<<endl<<"ptr = "<<p<<endl ;

}

int update(int *p){

    p = p + 1 ;
    return 0 ;

}

int updatev(int *p){

    *p = *p + 1 ;

}

    //IT WORKS .

    //In this case, the value of *p changes in the main function as well because you are modifying the value at the memory location pointed to by p.
    // When you dereference the pointer with *p, you are accessing the actual memory location that ptr points to and changing the value stored there. 
    //This modification affects the original variable val in the main function, as well as what you print with *ptr .
    //So, when you increment *p in the updatev function, you are changing the value of the variable val in the main function, 
    //which is what you observe when you print the value of *c before and after the function call.