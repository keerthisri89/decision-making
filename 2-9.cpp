#include<iostream>
using namespace std;
int main(){
	int y;
	cin>>y;
	if(y%400==0){
		cout<<"it is leap year";
	}
	else if(y%100==0){
		cout<<"it is not leap year";
	}
		else if(y%4==0){
		cout<<"it is leap year";
	}
		else{
		cout<<"it is not leap year";
	}
}
