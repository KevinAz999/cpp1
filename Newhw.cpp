#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Input upper range: ";
	cin>>n;	//10
	
	for(int i = 3 ; i<=n ; i++){
		if(i%3==0){
			cout<<i<<" ";
		}
	}
	
	return 0;
}
