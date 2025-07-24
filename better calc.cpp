#include<iostream>
using namespace std;
 int main(){
int x;
int y;
char op;
cout<<"enter value of x: " ;
cin>> x;
cout<<"ënter opeartor: " ;
cin>> op;
cout<< "ënter value of y: " ;
cin>> y;
int result;
if(op=='+'){
int result=x+y;
}
else if(op=='-'){
int result=x-y;
}
else if(op=='*'){
int result=x*y;
}
else if(op=='/'){
int result=x/y;
}

else {
cout<<"ïnvalid operator";
}
cout<<result;
return 0;

 }
