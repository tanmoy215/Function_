#include<iostream>
using namespace std;
int func(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int ncr = func(n)/(func(r)*func(n-r));
    return ncr;
}
int permutation(int n,int r){
    int npr = func(n)/func(n-r);
    return npr;
}
int main(){
    int n,r;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter r : ";
    cin>>r;
cout<<"Combination Value : "<<combination(n,r)<<endl<<"Permutation Value : "<<permutation;
}