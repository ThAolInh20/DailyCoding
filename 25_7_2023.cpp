#include<iostream>
using namespace std;
bool Find(int n, int *a, int gt){
	bool co=false;
	for(int i=0;i<n;i++){
		if(a[i]==gt){
			co= true;
		}
	}
	return co;
}
int Find_Missing(int n, int *a){
	int i=1;
	while(i<n){
		if(Find(n, a, i)) i++;
		else break;
	}
	return i;
}
int main(){
	int n=7;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	
	}
	cout<<"so bi thieu: "<<Find_Missing(n,a);
}
