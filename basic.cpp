#include<iostream>
using namespace std;
void start(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    start(n);
    start(n+1);
    start(n+2);

}