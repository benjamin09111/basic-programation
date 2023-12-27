#include<iostream>
#include<set>
using namespace std;

int main(){
	set<int> myset;
	
	myset.insert(5);
	myset.insert(15);
	myset.insert(25);
	myset.insert(5);
	
	for(const int& value : myset){
		cout<<value<<" ";
	}
	
	
	//comparator
	
	
	return 0;
}
