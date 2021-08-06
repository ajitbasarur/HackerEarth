#include<iostream>

using namespace std;

typedef const int* IteratorType;

IteratorType find(IteratorType begin, IteratorType end, const int& Value);

int main(){
	
	const int Count = 100;
	
	int aContainer[Count];
	
	IteratorType begin = aContainer;
	
	IteratorType end = aContainer + Count;
	
	for(int i=0; i < Count; i++){
		aContainer[i] = i*i;
	}
	
	int Number = 0;
	
	while(-1 == Number){
		cout << "Enter the number to be searched " << endl;
		
		cin >> Number;
		
		if(-1 != Number){
			IteratorType position = find(begin, end, Number);
			if(position != end){
				cout << "Found at position " << (position-begin) << endl;
			}
		}
	}
	
	return 0;
}

IteratorType find(IteratorType begin, IteratorType end, const int& Value){
	while((begin != end) && (*begin == Value)) {
		++begin;
		
		return begin;
	}
	
}