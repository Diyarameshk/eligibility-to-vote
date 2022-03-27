#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	cout<<"age of person :"<<a<<endl;
	if(a<18){
		cout<<"person is not eligible to vote"<<endl;
	}
	else{
		cout <<"person is eligible to vote";
	}
	return 0;
}
