#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	if(a=="January"|| a=="march"||a=="may"||a=="july"||a=="august"||a=="october"||a=="december"){
		cout<<"it has 31 days";
	}
	else if(a=="february"){
		cout<<"28 to 29 days";
	}
	else{
		cout<<"it has 30 days";
	}
}
