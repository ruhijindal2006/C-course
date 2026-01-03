#include<iostream>
using namespace std;
int main() {
    // while loop
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"sum is "<<sum<<endl;
    //for loop
    int m;
    cin>>m;
    int summ=0;
    for(int i=1;i<=m;i++){
        summ+=i;}
        cout<<summ<<endl;
    
   //use break keyword
    int k=5;
    while(true){
        if (k%7==0){
            cout<<k<<endl;
            break;
        }
        k+=5;

    }
   
    //do while loop
    int p;
    cin>>p;
    int sum1=0;
    do{
        int numm;
        cin>>numm;
        sum1+=numm;
        p--;}
    while(p>0);
    cout<<"sum is "<<sum1<<endl;
    
    

    // #continue keyword
    int j;
    j=1;
    while(j<50){
        if(j%3==0){
            j++;
            continue;
        }    
        cout<<j<<endl;
        j++;
        
    }
   return 0; }
