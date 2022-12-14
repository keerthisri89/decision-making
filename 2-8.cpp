#include<iostream>
using namespace std;
int main(){
	int d;
	string m,sign;
	cin>>d>>m;
	if(m =="dec"){
		if(d<22)
		sign="sagittarius";
		else
		sign="capricorn";
		}
		else if(m =="jan"){
			if(d<20)
			sign="capricorn";
			else
			sign="aquarius";
		}
			else if(m =="feb"){
			if(d<19)
			sign="aquarius";
			else
			sign="pisces";
		}
			else if(m =="mar"){
			if(d<21)
			sign="pisces";
			else
			sign="aries";
		}
		else if(m =="apr"){
			if(d<20)
			sign="aries";
			else
			sign="taurus";
		}
		else if(m =="may"){
			if(d<21)
			sign="taurus";
			else
			sign="gemini";
		}
		else if(m =="june"){
			if(d<21)
			sign="gemini";
			else
			sign="cancer";
		}
		else if(m =="july"){
			if(d<23)
			sign="cancer";
			else
			sign="leo";
		}
		else if(m =="aug"){
			if(d<23)
			sign="leo";
			else
			sign="virgo";
		}
		else if(m =="sep"){
			if(d<23)
			sign="virgo";
			else
			sign="libra";
		}
		else if(m =="oct"){
			if(d<23)
			sign="libra";
			else
			sign="scorpio";
		}
		else if(m =="nov"){
			if(d<22)
			sign="scorpio";
			else
			sign="sagittarius";
		}
	cout<<sign;
}
