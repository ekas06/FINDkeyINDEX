#include <iostream>
using namespace std;

int main() {
  int n;
  int key;
  int flag;
  cout<<"number elements in array";
  cin>>n;
  cout<<"enter value of key";
  cin>>key;
  flag=0;
  int a[n];
  cout<<"enter elements of array";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  
  for(int i=0;i<n;i++){
    if(key==a[i]){
      flag++;
    }
  }
  if(flag==0){
    cout<<-1;
  }
  else{
    int j=0;
    int b[flag];
    for(int i=0;i<n;i++){
      if(key==a[i]){
        b[j]=i;
        j++;
      }
        
      }
    for(int i=0;i<flag;i++){
      cout<<b[i]<<" ";
    }
    }
  return 0;
}