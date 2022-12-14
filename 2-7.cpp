#include<iostream>
using namespace std;
int main(){
	string m;
	int d;
	cin>>m>>d;
	if(m=="march" && d<=20||m=="jan" && d<=31||m=="feb"&& (d<=28||d<=29)||m=="dec"&& (d>21 && d<=31)){
			cout<<"spring";
		}
	else if(m=="june"&& d<=21 || m=="april" && d<=30 || m=="may" && d<=31||m=="march" && (d>20 && d<=31)){
		cout<<"summer";
	}
	else if(m=="sep" && d<=22 || m=="july" && d<=31 || m=="aug"&& d<=31 ||m=="june" && (d>21 && d<=30)){
		cout<<"fall";
	}
	else if(m=="dec"&& d<=21 || m=="oct" && d<=31 || m=="nov" && d<=30|| m=="sep" &&(d>22 && d<=30)){
		cout<<"winter";
	}
	
}
