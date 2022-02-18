#include <iostream>
#include <set>

using namespace std;

int count(int data[],int n){
	set<int> mySet (data, data+n);
	return mySet.size();
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	
	
	return 0;
}
