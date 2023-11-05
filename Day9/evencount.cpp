//Count even numbers in array
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={4,5,8,2,6};
    int count=0;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count=count+1;
        }
    }
    cout<<count;
    return 0;
}