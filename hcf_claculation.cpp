#include<iostream>
using namespace std;
int gcd(int a, int b){
    int hcf =1;
    for(int i=min(a,b);i>=1;i--){ //for(int i=1;i<=min(a,b);i++){ if(a%i==0 && b%i==0) hcf=i;}
        if(a%i==0 && b%i==0) hcf = i;
        break;
    }
    return hcf;
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int m;
    cout<<"enter m : ";
    cin>>m;
    cout<<"Final ans is : "<<gcd(n,m);
}