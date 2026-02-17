//set used to store unique  element in accending order
#include<bits/stdc++.h>
using namespace std;

void setEx(){
 set<int> st;
 st.insert(10);
 st.insert(10);
 st.insert(0);
 st.insert(5); 
 st.insert(1);
 st.insert(18);
 st.insert(1);

 //List of element in set in accending order without repeating
 for(auto i: st){
    cout<<i<<" ";}
    cout<<endl;
 

 //find if element present in the set
 //auto automatically detect the actual type.
 //.find() find element:if found return index,if not found then return st.end();
 auto it = st.find(10);  //prints 10 if set contain 10
 if(it != st.end()){
 cout<< *it<<endl;}



 //Count function also used to check if element is present or not
 cout<<"Does  10 in set present?:"<<st.count(1)<<endl; //print 1 if present else 0;



 //lower_bound-it return an iterator that points to an  element
 //that is first number >=number given

 auto it6 = st.lower_bound(4);
 cout<<"THe 1st gretaer number than 4 is:"<< *it6<<endl;
 auto is1 = st.lower_bound(19); //no greater than this so
 if( is1==st.end()){cout<<"END"<<endl;}
 else{cout<<"THe 1st gretaer n equal number than 19 is:"<<*is1<<endl;}

//upper_bound used to return iterator that points to an element that > number given
 auto is2 = st.upper_bound(5); //no greater than this so
 if( is2==st.end()){cout<<"END"<<endl;}
 else{cout<<"THe 1st strictly gretaer number than 5 is:"<<*is2<<endl;}






//Erase all that element with its duplicate also
st.erase(10);
for(auto j: st){cout<<j<<" ";}   //prints:0,1,5,18
cout<<endl;



//Now erase in range
auto it1 = st.begin();
it1++;
auto it2=st.end();
it2--;
st.erase(it1,it2);

for(auto ijr : st){
   cout<<ijr<<" ";}

}



int main(){
    setEx();
    return 0;
}