#include<iostream>
using namespace std;
int main(){
     int n,m;
     int x;
     cin>>n>>m;
     int arr[n][m];
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
               cin>>arr[i][j];
          }
     }
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
               cout<<arr[i][j]<<"";
          }
          cout<<endl;
     }
     //Finding a element
     cin>>x;
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               if(arr[i][j]==x){
                    cout<<"Element found"<< arr[i][j];
               }
          }
     }
     return 0;
}