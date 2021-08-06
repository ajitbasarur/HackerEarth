#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


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
			vector<int>::iterator position = find(aContainer.begin(), aContainer.end(), Number);
			if(position != aContainer.end()){
				cout << "Found at position " <<(position-aContainer.begin()) << endl;
			}
		}
	}
	
	return 0;
}

