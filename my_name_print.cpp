#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==(n/2 +1)) cout<<"T";
            else cout<<" ";
        }
        for(int k=1;k<=n/2;k++){
                cout<<" ";
        }
        for(int j=1;j<=n;j++){
            if(((i==1 && j==3) ||i==3)) cout<<"A";
            else if((i==2 && j==2) || (i==2 && j==4)) cout<<"A";
            else if((i>=3 && j==1) || (i>=3 && j==n)) cout<<"A";
            else cout<<" ";
        }
        for(int k=1;k<=n/2;k++){
                cout<<" ";
        }
        for(int j=1;j<=n;j++){
            if(j==1 || j==n) cout<<"N";
            else if(i==j) cout<<"N";
            else cout<<" ";
        }
        for(int k=1;k<=n/2;k++){
                cout<<" ";
        }
         for(int j=1;j<=n;j++){
                 if((j==1 || j==n)||(i==2 && j!=3 )) cout<<"M";
                 else if(i==3 && j==3) cout<<"M";
                 else cout<<" ";
         }
         for(int k=1;k<=n/2;k++){
                cout<<" ";
        }
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n) cout<<"O";
            else cout<<" ";
        }
        for(int k=1;k<=n/2;k++){
                cout<<" ";
        }
        for(int j=1;j<=3;j++){
            if(i==j) cout<<"Y";
            else if(i>=3 && j==3) cout<<"Y";
            else cout<<" ";
        }
        for(int j=4;j<=5;j++){
            if(i+j==6) cout<<"Y";
            else cout<<" ";
        }
        cout<<endl;
    }
}