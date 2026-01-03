//count the number of digits
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int digits=0;
    while(n>0){
        digits++;
        n=n/10;
    }
cout<<"number of digits:"<<digits<<endl;


// sum of digits in a given number n
       int n;
       cin>>n;
       int sum=0;
       while(n>0){
        int lastdigit=n%10;
        sum+=lastdigit;
        n=n/10;
       }
       cout<<sum<<endl;

       //reverse the digits of a number
          int n;
          cin>>n;
          int reverse =0;
          while(n>0){
            int lastdigit =n%10;
            reverse=reverse*10 + lastdigit;
            n=n/10;
          }
          cout<<reverse<<endl;

        // sum of following series 1-2+3-4+5-6...n
             int n;
             cin>>n;
             int result=0;
             for(int i=0;i<=n;i++){
                if(i%2 ==0){
                    result-=i;
                }
                else{
                    result+=i;
                }
             }
             cout<<result<<endl;


            //print first n factorial numbers
            int n;
            cin>>n;
            int factorial=1;
            for(int i=1;i<=n;i++){
                factorial*=i;
                cout<<factorial<<endl;
            }
    return 0;
}