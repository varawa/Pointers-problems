#include<iostream>
#include<string.h>

using namespace std ;

//ARRAY
// int arr[10]
// NOTE : arr == &arr[0] == &arr
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
// |_1_|_3_|_5_|_7_|_9_|_6_|_2_|_4_|_8_|

// Size of array = 40 Bytes .
// Here , arr is a pointer to first element of the array . Hence , stores its location .

//POINTER
//int *p = &arr[0]    
//In the above statement , p points to the first element of the array arr[10] .

//NOTE : arr = &arr BUT p != &p 

//NOTE : Content of a symbol table cannot be changed .
//i.e. arr = arr + 1 will give error .
//While p = p + 1 is possible .

int main(){

    int arr[10] = {1 , 3 , 5 , 7 , 9 , 6 , 2 , 4 , 8 , '\0'} ;

    int *p = &arr[0] ;

    cout<<"arr = "<<arr<<endl ;
    cout<<"&arr = "<<&arr<<endl ;
    cout<<"&arr[0] = "<<&arr[0]<<endl<<endl ;

    //SAME STUFF .
         
    //Size of pointer pointing to first element of array : 4 bytes (On 32 bit machine .) . (8 bytes on 64 bit machine .)
    cout<<"Size of p : "<<sizeof(p)<<endl ;

    //Size of *p : 4 bytes . (Because its an integer) .
    cout<<"Size of *p : "<<sizeof(*p)<<endl ;

    //Size of &p : 4 bytes . (Because its an integer too ) .
    cout<<"Size of &p : "<<sizeof(&p)<<endl ;
    
    //Size of arr : 40 bytes . (One integer takes 4 bytes , so 10 integers will take 40 bytes ) . 
    cout<<"Size of arr : "<<sizeof(arr)<<endl ;

    //Size of arr : 40 bytes . (One integer takes 4 bytes , so 10 integers will take 40 bytes ) . 
    cout<<"Size of &arr : "<<sizeof(&arr)<<endl ;

    //Size of arr : 4 bytes . (Because its an integer ) ,
    cout<<"Size of *arr : "<<sizeof(*arr)<<endl ;
    
    return 0 ;

}