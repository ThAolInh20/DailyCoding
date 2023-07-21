#include<iostream>
using namespace std;
//given a list numbers and a number k, return wherether any two numbers add up to k;
bool ktra(int k, int n, int *list){
	bool co=false;
	for(int i=0;i<n-1;i++){
		int hieu=k-list[i];
		for(int j=i+1;j<n;j++){
			if(list[j]==hieu) {
				co=true;
				break;
			}
		}
		if(co==true) break;
	}
	return co;
}

bool ktra2(int)
int main(){
	int n=5;
	int *list=new int[n];
	list[0]=1;
	list[1]=3;
	list[2]=6;
	list[3]=12;
	list[4]=23;
	if(ktra(15,n,list)){
		cout<<"tot";
	}
	else cout<<"ga";
}
