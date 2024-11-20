#include <iostream>
using namespace std;
int leng(char *a){
	int i =0;
	while(a[i] != '\0'){
		i++;
	}
	return i;
}

int main(){
	char a[50] = "abbbbaabbbacbbdacccaaaaccca";	
	int i = 0;
	int max = 0, hs, ii, cr;
	while(i <= leng(a)){
		hs = 0;
		if(a[i] == a[i + 1]){
			hs = 1;
			cr = 2;
			while(i - hs > -1 && i + hs + 1 < leng(a)){
				if(a[i - hs] == a[i + 1 + hs]){
					cr += 2;
					hs++;
				}else{
					break;
				}
				
			}
				
		}else if(a[i] != a[i+1] && a[i + 1] == a[i - 1]){
			hs = 2;
			cr = 3;
			while(i - hs > -1 && i + hs < leng(a)){
				if(a[i - hs] == a[i + hs]){
					cr += 2;
					hs++;
				}else break;
			}		
		}
		if(cr > max){
			max = cr;
			ii = i;
		}
		i++;
		
	}
	
	int kk = 0;
	if(ii >leng(a)){
		return 0;
	}
	if(max % 2 ==0){
		kk = ii - (max / 2 - 1);
	}else{
		kk = ii - max / 2;
	}
	for(int i = kk; i < kk+ max; i++){
		cout<<a[i];
	}
	
	
}
