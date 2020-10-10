#include <iostream>
#include <stack>
using namespace std;
bool check(string str){
	stack<char> s;
	for(int i=0; i<str.size(); ++i){
		char current=str[i];
		if(current=='('){
			s.push(current);
		}
		else if(current==')'){
			if(s.empty() || s.top()!= '('){
				return false;
			}
			s.pop();
		}
	}
	return s.empty();
}
int main(){
	string par;
	cin >> par;
	bool valid=check(par);
	cout<<valid;
	return 0;
}
