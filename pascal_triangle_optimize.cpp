#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
for(int i=0;i<=n;i++){
    for(int k=0;k<=n-i;k++){
        cout<<" ";
    }
    int first =1;
    for(int j=0;j<=i;j++){
        cout<<" "<<first;
       first = first*(i-j)/(j+1);
    }
    cout<<endl;
}
}