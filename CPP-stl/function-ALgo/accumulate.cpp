#include<bits/stdc++.h>
using namespace std ;


void Exaccumulate(){
    int arr[5]={4,2,5,6,7};
    cout<<"Summ al array element is :"<<accumulate(arr,arr+5,0)<<endl;
    //here in upper 0 is initial sum=0

}



int main(){
Exaccumulate();
return 0;
}