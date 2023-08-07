#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
//Given an array of integers and a number k, where 1 <= k <= length of the array, compute the maximum values of each subarray of length k.
//
//For example, given array = [10, 5, 2, 7, 8, 7] and k = 3, we should get: [10, 7, 8, 8], since:
//
//10 = max(10, 5, 2)
//7 = max(5, 2, 7)
//8 = max(2, 7, 8)
//8 = max(7, 8, 7)
int max_in_local(int *a,int begin, int end){
	int max=a[begin];
	if(begin>end){
		int temp=begin;
		begin=end;
		end=temp;
	}
	for(int i=begin+1; i<=end;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
void show_max(int *a, int n, int k){
	int i=0;
	cout<<"mang gom max cua "<<k<<" phan tu lien nhau la: "<<endl;
	while(i<n-k+1){
		cout<<max_in_local(a, i,i+k-1)<<" ";
		i++;
	}
}
int main(){
	cout<<"nhap so phan tu: ";
	int n;cin>>n;
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	int *a=new int[n];
	for(int i=0;i<n;i++){
		a[i]=rand()%10;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"nhap khoang cach k: ";
	int k;cin>>k;
	show_max(a,n,k);
}
