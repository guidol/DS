#include<iostream>
using namespace std;

class sorting{
       public:
            void BubbleSort(int a[], int n);
            void swap(int *x, int *y);
};
void sorting::swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sorting::BubbleSort(int a[], int n){
   
    
     int i,j,flag=0;

   
         for(i=0; i < n-1 ; i++){
             flag = 0;
             for(j=0; j < n-1-i ; j++){
                 if(a[j] > a[j+1]){
                     swap(&a[j], &a[j+1]);
                     flag = 1;
                 }
             }
             if(flag == 0)
                 break;
         }
}
int main(){
    int A[10] = {3,7,9,10,6,5,12,4,11,2};

    sorting srt;
    srt.BubbleSort(A,10);
    for(int i=0 ; i < 10 ; i++)
        cout<<" "<<A[i];
    cout<<endl;
    return 0;
}
