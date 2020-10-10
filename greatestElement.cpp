#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n; i++){
		cin>>arr[i];
	}
	stack <int> s;
	s.push(arr[0]);
	for (int i = 1; i < n; i++) { 
    if (s.empty()) { 
      s.push(arr[i]); 
    } 
    while (s.empty() == false && s.top() < arr[i]) 
    {   cout <<arr[i]<<" "; 
        s.pop(); 
    } 
    s.push(arr[i]); 
  } 
  while (s.empty() == false) { 
    cout<< -1 << endl; 
    s.pop(); 
  }  
return 0;	
}
