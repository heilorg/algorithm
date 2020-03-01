#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	vector<int> v2(8);		//크기 : 8 
	vector<int> v3(8, 2);	//크기 : 8, 기초값 : 2 
	vector<int> v4(v3); // 복사 
	
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	
	v.pop_back();
	
	for(int i = 0; i < v.size(); i++){
		
	}
	
	for(auto x : v3){
		
	}
	
	cout << v.front() << " " << v.back();
	
	sort(v.begin(), v.end());
	reserve(v.begin(), v.end());
	random_shuffle(v.begin(), v.end());
	
	v.erase(unique(v.begin(), v.end()), v.end());
	
	
	v.clear();
}
