#include<iostream>
using namespace std;
int P(int n){
	if (n<2) return 1;
	else return n*giaithua(n-1);
}
int C(int k, int n){
	int m=giaithua(n)/(giaithua(k)*giaithua(n-k));
	return m;
}
int heso(int N){
	
}
int main(){
	cout<<C(3, 7);
}
