#include<iostream>
using namespace std;
int main() {
    // int num1=4;
    // int num2=2;
    // // Arithmetic Operators
    // cout<<"sum:"<<num1+num2<<endl;   //6
    // cout<<"sub:"<<num1-num2<<endl;   //2
    // cout<<"mul:"<<num1*num2<<endl;   //8
    // cout<<"div:"<<num1/num2<<endl;   //2
    // cout<<"mod"<<num1%num2<<endl;   //0

    // // Relational Operators
    // cout<<(num1==num2)<<endl; //0
    // cout<<(num1!=num2)<<endl; //1
    // cout<<(num1>num2)<<endl; //1
    // cout<<(num1<num2)<<endl; //0
    // cout<<(num1>=num2)<<endl; //1 
    // cout<<(num1<=num2)<<endl; //0

    // //Logical Opeartors
    // bool exp1=true;
    // bool exp2=false;
    // cout<<(exp1 && exp2)<<endl; //0
    // cout<<(exp1 || exp2)<<endl; //1
    // cout<<(!exp1)<<endl; //0
    // cout<<(!exp2)<<endl; //1

    // //Assignment Operators
    //    num1 += 2; //4+2=6
    //    cout<<num1<<endl;
    //    num2 -= 1; //2-1=1
    //    cout<<num2<<endl;
    //    num1 *=2; //6*2=12
    //    cout<<num1<<endl;
    //    num2 /=1; //1/1=1
    //    cout<<num2<<endl;
    //    num1 %=4; //12%4=0
    //    cout<<num1<<endl;

       //Bitwise Operators
          int num1=4; //0100
          int num2=2; //0010
          cout<<(num1<<1)<<endl; //8
          cout<<(num2>>1)<<endl; //1
          cout<<(num1 & num2)<<endl;//0
          cout<<(num1 | num2)<<endl;//6
          cout<<(num1 ^ num2)<<endl; //6

          //Misc Operators
          cout<<sizeof(num1)<<endl; //4
          char ch='a';
          cout<<sizeof(ch)<<endl; //1
          cout<<(&num1)<<endl; //address of num1

          cout<<num1++<<endl; //4
          cout<<num1<<endl; //5
          cout<<++num1<<endl; //6
          cout<<num1--<<endl; //6
          cout<<num1<<endl; //5
          cout<<--num1<<endl; //4
          


    


  




  
    return 0;
}