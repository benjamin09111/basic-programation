#include<iostream>
#include<deque>
using namespace std;

int main (){
	deque<int> mydeque;
	
	mydeque.push_back(5);
	mydeque.push_front(10);
	mydeque.push_back(4);
	mydeque.push_back(3);
	mydeque.push_back(2);
	
	//erase, insert
	mydeque.insert(mydeque.begin()+1,100);
	mydeque.erase(mydeque.begin()+2);
	
	//print
	for(int i=0; i<mydeque.size(); i++){
		cout<<mydeque.at(i)<<" ";
	}
	
	return 0;
}
