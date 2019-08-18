#include<iostream>
using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;
    public:
    Array(){
        size = 10;
        A = new int[size];
        length = 0;
    }
    Array(int sz){
        size = sz;
        A = new int[sz];
        length = 0;
    }
        

};