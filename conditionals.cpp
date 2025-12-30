#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    //if statement
    if (marks>33){
        cout<<"pass"<<endl;
    }


//if else statement
int num;
cout<<"enter a number:";
cin>>num;
if (num%2==0){
    cout<<"even number";
}
else{
    cout<<"odd number";
}

// if else if ladder
int age;
cout<<"enter a age";
cin>>age;
if(age<=12)
{
cout<<"child";
}else if( age>12 && age<18){
cout<<"teenager";
}else{
cout<<"adult";
}
 //nested if else
int markss;
cout<<"enter your marks";
cin>>markss;
if(markss>33){
    if (markss>80){
        cout<<"gracefully";
    } else {
        cout<<"Pass";
    }
}else{
    cout<<"fail";
}   

//switch case
int number;
cout<<"enter day number";
cin>>number;
switch(number){
    case 1:
        cout<<"monday";
        break;
    case 2:
        cout<<"tuesday";
        break;
    case 3:
        cout<<"wednesday";
        break;
    case 4:
        cout<<"thursday";
        break;
    case 5:
        cout<<"friday";
        break;
    case 6:
        cout<<"saturday";
        break;
    case 7:
        cout<<"sunday";
        break;
    default:
        cout<<" invalid";
}
return 0;    
        
        
        
        
    
}
   

