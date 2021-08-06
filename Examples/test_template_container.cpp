#include<iostream>
#include<vector>

using namespace std;

typedef vector<int>::const_iterator IteratorType;

template<class IteratorType, class T>
IteratorType find(IteratorType begin, IteratorType end, const T& Value){
	while((begin != end) && (*begin != Value)) {
		++begin;
	}
	
	return begin;
}

int main(){
	
	const int Count = 100;
	
	vector<int> aContainer(Count);
	
	cout << "Testing STL" << endl;
	
	for(int i=0; i < Count; i++){
		aContainer[i] = 2*i;
	}
	
	int Number = 0;
	
	while(-1 != Number){
		cout << "Enter the number to be searched " << endl;
		
		cin >> Number;
		
		if(-1 != Number){
			IteratorType position = ::find(aContainer.begin(), aContainer.end(), Number);
			if(position != aContainer.end()){
				cout << "Found at position " <<(position-aContainer.begin()) << endl;
			}
		}
	}
	
	return 0;
}

