#include<iostream>
using namespace std;
int main() {

    //  rectangular pattern
    int n,m;
    cout<<"enter n and m"<<endl;
    cin>>n;
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
//     return 0;
// }

//wholo rectangular pattern

    int f,g;
    cin>>f>>g;
    for(int t=1;t<=f;t++){
        for(int k=1; k<=g; k++){
            if(t==1 || k==1 || t==f || k==g){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
//     return 0;
// }

// triangular pattern
    int a;
    cin>>a;
    for(int b=1;b<=a;b++){
        for(int c=1;c<=b;c++){
            cout<<"*";
        }
        cout<<endl;
    }
    // return 0;}

    // inverted triangular pattern

    int x;
    cin>>x;
    for(int y=1;y<=x;y++){
        for(int z=1;z<(x-y+1);z++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}    

//numerical rectangular pattern
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j;
    
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0; }

  









