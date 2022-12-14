#include<iostream>
using namespace std;
int main() {
    char i;
    cin>>i;
    if(i=='a'||i=='e'||i=='o'||i=='i'||i=='u'){
        cout<<"letter is a vowel";
    }
    else if(i=='y'){
        cout<<"sometimes y is vowel and sometimes y is a consonent";
    }
    else{
        cout<<"the letter is a consonent";
    }

}
