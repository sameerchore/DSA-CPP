#include<bits/stdc++.h>
using namespace std ;


void ExFIndinArray(){
  //count use to count how much element present in arr
  int arr[5] ={4,4,2,56,4};
  auto i= find(arr,arr+5,2);
  cout<<*i<<":this is present in arrya";
}



int main(){
ExFIndinArray();
return 0;
}