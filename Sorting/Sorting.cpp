#include<iostream>
using namespace std;

class sorting{
       public:
            void BubbleSort(int a[], int n);
            void InsertionSort(int a[], int n);
            void SelectionSort(int a[], int n);
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
void sorting::InsertionSort(int a[], int n){
    int i,j,x=0;
    for(i = 1; i < n; i++){
        j = i - 1;
        x = a[i];
        while(j > -1 && a[j] > x){
            a[j + 1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
}
void sorting::SelectionSort(int a[],int n){
    int i,j,k=0;
    for(i = 0; i < n-1 ; i++){
        for(j=k=i; j < n ; j++){
            if(a[j] < a[k])
                k=j;
        }
        swap(&a[i],&a[k]);
    }
}
int main(){
    int A[10] = {3,7,9,10,6,5,12,4,11,2};

    sorting srt;
    //srt.BubbleSort(A,10);
    //srt.InsertionSort(A,10);
    srt.SelectionSort(A,10);
    for(int i=0 ; i < 10 ; i++)
        cout<<" "<<A[i];
    cout<<endl;
    return 0;
}
