#include<iostream>
using namespace std;
//素数判断（函数应用）,使用bool isPrime(int n)
//找出前200个素数，每行10个输出
bool is_prime(int n){
	if(n <= 1) return false;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
	int count = 0;
	for(int i = 2; count < 200; i++){
		if(is_prime(i)){
			cout << i << "\t";
			count++;
			if(count % 10 == 0) cout << endl;
		}
	}
	return 0;
}
