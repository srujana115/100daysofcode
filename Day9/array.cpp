// array is a data structure which can store multiple values of same data type.stored in contigeous memory.
#include<iostream>
using namespace std;
int main(){
     int arr[]={3,43,42,45,21};
     cout<<"using for loop"<<endl;
     for(int i=0;i<5;i++){
          cout<<arr[i]<<endl;
     }
     cout<<"Using for each loop"<<endl;
     for(int element:arr){
          cout<<element<<endl;
     }
     int arr2[]={4,5,6,3,7,35};
     int N=sizeof(arr2)/sizeof(int);
     for(int i=0;i<N;i++){
          cout<<arr2[i]<<endl;
     }
     return 0;
}

