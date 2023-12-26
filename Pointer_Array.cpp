#include<iostream>
#include<string.h>

using namespace std ;
int sum(int arr[] , int n) ;
//NOTE : int arr[10]
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
// |_1_|_2_|_3_|_4_|_5_|_6_|_7_|_8_|_9_|

//As one integer takes 4 bytes , so an array with five elements will take up 5*4 = 20 bytes .

int main(){

int array[] = { 1 , 3 , 5 , 7 } ;

//METHODS FOR ACCESSING MEMORY LOCATIONS OF ELEMENTS OF AN ARRAY .

//Name of array contains its first element's adress .

cout<<"Adress of first memory block is : "<<array<<endl ;

//Using & operator .

cout<<"Adress of first memory block is : "<<&array[0]<<endl ;
cout<<"Adress of second memory block is : "<<array + 1<<endl ;
cout<<"Adress of third memory block is : "<<&array[2]<<endl ;
cout<<"Adress of fourth memory block is : "<<&array[3]<<endl<<endl ;

//What does *array will do ?

cout<<"Value of first element of this array : "<<*array<<endl ;
cout<<"Value of second element of this array : "<<*(array+1)<<endl ;
cout<<"Value of third element of this array : "<<*(array+2)<<endl ;
cout<<"Value of fourth element of this array : "<<*(array+3)<<endl<<endl ;

//NOTE : *(array + 1) != *array + 1
//             3      !=    2

//NOTE : array[i] = *(array + i) = i[array] = *(i + array)

cout<<"array[0] = "<<array[0]<<endl<<"0[array] = "<<0[array]<<endl ;

//SAME STUFF .


return 0 ;

}

int sum(int arr[] , int n){ //This argument int arr[] isn't an array but a pointer to the first element of the array .

    int sum = 0 ;
    
    for(int i = 0 ; i < n ; i++){
        sum += arr[i] ;
    }

    return sum ;
}

//Benefits of it being a pointer :
    //1. You can pass a part of array instead of the whole array if you want .
    //  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
    // |_1_|_2_|_3_|_4_|_5_|_6_|_7_|_8_|_9_|
    //   0   1   2   3   4   5   6   7   8
    //Here if i only want to access elements after from arr[3] onwards then what i can do is :
    //int sum(int arr+3 , int n-3)
    //So , the pointer will point at the array's fourth element i.e. arr[3] and we'll access everything ahead of it .

    //A CODE SNIPPET :
    /*int main() {
    int arr[] = {1 , 2 , 3 , 4 , 5} ;
    int *p = arr++ ;                        //Won't work because in c or cpp array can't be increased by 1 like this , it can be done to pointer instead .
                                            //or we can write int *p = (arr + 1) ;
    cout<<*p<<endl ;
    return 0;
    }*/


//A CODE SNIPPET :

    /*int main(){

        float arr[5] = {12.5 , 10.0 , 13.5 , 90.5 , 0.5} ;
        float *ptr1 = &arr[0] ;
        float *ptr2 = ptr1 + 3 ;
        cout<<*ptr2<<" ";
        cout<<ptr2 - ptr1 ;
        return 0 ;
    }*/

    //OUTPUT : 90.5 3

//A CODE SNIPPET :

    /*void fun(int a[]) {
        
        cout << a[0] << " ";
    }

    int main() {
        
        int a[] = {1, 2, 3, 4};
        fun(a + 1);
        cout << a[0];
}*/

    //OUTPUT : 2 1

//A CODE SNIPPET :

    /*int main(){

        int a = 10 ;
        square(&a) ;
        cout<<a<<endl ;
        return 0 ;
    }
    
    void square(int *p){

        int b = 5 ;
        p = &a ;
        *p = (*p) * (*p) ;

    }*/

    //OUTPUT : 10