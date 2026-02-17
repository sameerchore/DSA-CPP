#include<bits/stdc++.h>
using namespace std ;


void MaxEle(){
int arr[] ={1,2,4,5,8,58};
auto it = max_element(arr,arr+6);
auto it1 = min_element(arr,arr+6);
cout<<"Max ele in array is :"<<*it<<endl;
cout<<"Min ele in array is :"<<*it1;
}



int main(){
MaxEle();
return 0;
}