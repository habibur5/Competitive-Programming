
#include <bits/stdc++.h>
using namespace std;

class Solution{
	
	
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    vector<int> result;
	    set<int>ans;
	    for(int i =0; i<m;i++){
	        ans.insert(b[i]);
	    }
	    for(int i =0; i<n; i++){
	        if(ans.find(a[i])== ans.end()) {
	            result.push_back(a[i]);
	        }
	    }
	    return result;
	} 
};

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<int> ans;
        
        
        Solution ob;
        ans = ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        cout << "\n";
    }
    return 0;
}
