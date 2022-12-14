#include<iostream>
using namespace std;
int main(){
	char c;
	int r;
	cin>>c>>r;
	if((c=='a'||c=='c'||c=='e'||c=='g') && (r%2==0)){
		cout<<"white";
	}
	else{
		cout<<"black";
	}
}
