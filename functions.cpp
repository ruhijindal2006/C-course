//user defined functions

#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=(num1+num2);
    return sum;
}
int add(int num1,int num2,int num3){
    int sum=(num1+num2+num3);
    return sum;
}
float add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}
int main(){
    int a=4;
    int b=5;
    cout<<add(a,b,1)<<endl;
    float x=4.5;
    float y=5.3;
    cout<<add(x,y)<<endl;
    return 0;

}

//standard library functions
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<pow(2,3)<<endl;
    cout<<sqrt(24)<<endl;
    int ans=sqrt(24);
    cout<<ans<<endl;
    return 0;
}

// amperson operator
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p=5;
    int &q=p;
    q++;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<&p<<endl;
    return 0;
}

pass by value

#include<iostream>
using namespace std;
void changevalue(int z){
    z=100;
}
int main(){
    int a=5;
    changevalue(a);
    cout<<a<<endl;
    return 0;

}

//pass by reference

#include<iostream>
using namespace std;
void changevalue(int &z){
    z=100;
}
int main(){
    int a=5;
    changevalue(a);
    cout<<a<<endl;
    return 0;

}

//default parameters

#include<iostream>
using namespace std;
int add(int a,int b=1,int c=2){
    return a+b+c;
}
int main(){
    cout<<add(2)<<endl;
    cout<<add(2,3)<<endl;
    cout<<add(2,3,4)<<endl;
    return 0;
}





