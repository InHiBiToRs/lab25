#include<iostream>
#include<set>
using namespace std;

int count(const int *c,int loc){
	set<int>  vee;
	for(int i = 0;i < loc;i++){
		vee.insert(c[i]);
	}
	return vee.size();
}
//Write function count() here.

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
