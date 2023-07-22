#include<iostream>
using namespace std;
void chuyendoi(int n, int *a, int *&b){
	int i=0;
	int j=0;
	while(i<n){
		if(a[i]%2==0){
			b[j]=a[i];
			j++;
		}
		i++;
	}
	i=0;
	while(i<n){
		if(a[i]%2!=0||a[i]==0){
			b[j]=a[i];
			j++;
		}
		i++;
	}
}
void ht(int n,int *a){
	for(int i=0;i<n;i++ ){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void nhap(int n,int *&a){
	for(int i=0;i<n;i++ ){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
int main(){
	
	int n=7;
	int *a=new int[n];
	int *b=new int[n];
	cout<<"nhap: "<<endl;
	nhap(n, a);
	ht(n, a);
	chuyendoi(n, a, b);
	ht(n,b);
	
	
}
