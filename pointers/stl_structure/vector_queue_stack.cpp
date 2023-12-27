#include<iostream>
#include<deque>
using namespace std;

int main (){
	deque<int> mydeque;
	
	mydeque.push_back(5);
	mydeque.push_front(10);
	
	for(int i=0; mydeque.size(); i++){
		cout<<mydeque[i]<<" ";
	}
	
	return 0;
}
