#include<iostream>
using namespace std;
int main() {
   int s1,s2,s3;
   cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3){
        cout<<"it is equilateral triangle";
    }
    else if(s1==s2||s2==s3||s3==s1){
        cout<<"it is an isosceles triangle ";
    }
    else{
        cout<<"it is scalene";
    }

}
