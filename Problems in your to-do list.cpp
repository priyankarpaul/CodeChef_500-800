#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int size=n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	    cin>>arr[i];
	    if(arr[i]<1000) 
	    size--;
	    }
	    cout<<size<<endl;
	}

}
