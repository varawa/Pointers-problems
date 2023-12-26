#include<iostream>
#include<string.h>

using namespace std ;



int main(){

    
    double num = 3.14 ;

    double *n = &num ;

    cout<<"Value : "<<*n<<" Location : "<<n <<endl ;


    //SIZE OF A POINTER 

    cout<<"Size of pointer : "<<sizeof(n)<<endl ;

    //4 BYTES . (CAN ALSO BE 8 BYTES IN SOME CASES .) .

    //TYPES OF INITIALIZATIONS :

        //(i) int *p = &num ;

        //(ii) int *p = 0 ;
        //     *p = &num ;

    //SAME  STUFF .


    //THE INCREMENT DRAMA .

    //(i) BASIC HUMAN WAY :

    int whole = 3 ;
    int *w = &whole ;

    (*w)++ ;

    cout<<"*w = "<<*w<<endl<<"whole =  "<<whole<<endl ;

    //In the above way , increasing *p increases whole because it literally points to whole and is NOT a COPY of whole .

    //(ii) WIERD WAY :

    int whole1 = 3;
    
    int *w1 = &whole1 ;

    int copy = *w1 ; 
    copy++ ;

    cout<<"whole1 = "<<whole1<<endl<<"*w1 = "<<*w1<<endl<<"copy = "<<copy<<endl ;

    //In the above way , only the value of copy changes by increment operator . Because it copies the value of *w1 and not points towards it .
    // So it is a new memory and the increment is done to this new memory only .


    //MAKING A NEW POINTER COPYING ANOTHER POINTER .

    int *w2 = w1 ;

    (*w2)++ ;           //*w2++ : WRITING LIKE THIS WON'T WORK AND SHOULDN'T BE DONE .


    cout<<"whole1 = "<<whole1<<endl<<"*w1 = "<<*w1<<endl<<"*w2 = "<<*w2<<endl<<"w2 = "<<w2<<endl<<"w1 = "<<w1<<endl ;

    //IMPORTANT CONCEPT :

    w2 = w2 + 1 ; 

    //Let's say the memory location of whole1 is 100 . So , ideally as w2 = 100 , w2 + 1 should be 101 .
    //But it doesn't work that way , beacuse an integer takes a certain amount of memory i.e. 4 bytes which means its taking up all memory locations from 100 to 103 
    //and hence the next free memory location is 104 . So , w2 = w2 + 1 will give us  104 and not 101 .

    cout<<"w2 after increment : "<<w2 <<endl ;

    //befor w2 = 0x61fed8
    //after w2 = 0x61fedc
    //i.e. increased by 4 .

    return 0 ;
}