#include<iostream>
#include<string.h>

using namespace std ;

//Memories do not have names .
//They have locations .
//For example : If we make a variable of integer type and call it num and give it a value 5 .
//Now , when we call it , it is not called by name as its memory location doesn't have a name but its called by its location in main memory .

//SYMBOL TABLE :

//Symbol Table is an important data structure created and maintained by the compiler in order to keep track of semantics of variables 
//i.e. it stores information about the scope and binding information about names, information about instances of various entities such as variable and function names, 
//classes, objects, etc. 
//Example :

//  Variable    Location  
//    num         120
//This way a variable's location is stored by compiler and used .

int main(){

    int num =5 ;
    
    //Address of operator .

    cout<<"Adress of num is : "<<&num <<endl ;

    //POINTER

    //We will initialize a pointer and store the location of above variable using reference operator .
    //*p points to a variable num and location p stores this location .

    //int *x ;      //Defining a pointer without defining where it points is a BAD PRACTICE .
                    //SHOULD BE AVOIDED AT ANY COST .

    //int *x = 0 ;  //INstead initialize like this , when we try to access it we get SEGMENTATION FAULT .

    //BASIC IDEA :  *p == num && p == location of num .
                    //int *p ==> int is data type ; * defines a pointer ; p is the pointer .
                    //p is a pointer to "int" data type and only points to a int type variable .
                    //Similarly , for char we write char *p .
                    //int *p = &num : this is read as => p is a pointer to int num .

    //* is a DEREFERENCE OPERATOR .
    //*p mean the de-reference of &num and hence it will give the vale of num i.e. 5 .
    //*p = Value at adress pointed by p .
    
    int *p = &num ;
    cout<<"Value : "<<*p<<endl<<"Location :"<<p<<endl ;


    return 0 ;
}

//A CODE SNIPPET :

/*int main(){

        int a = 10 ;
        changesign(&a) ;
        cout<<a ;

    }

void changesign(int *p){

    *p = (*p) * -1 ;
}*/

//OUTPUT : -10