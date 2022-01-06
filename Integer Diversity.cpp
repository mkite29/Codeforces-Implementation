void solve(){
 
	int n;
	cin>>n;
 
	vector<int> arr(n);
	unordered_map<int,int> mp;
 
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
		mp[abs(arr[i])]++;
	}
 
	int res = 0;
 
	for(auto i : mp){
 
		if(i.second == 1){
			res++;
		}
 
		else {
			res+=2;
			if(i.first == 0){
				res--;
			}
		}
 
 
	}
	
	cout<<res<<endl;
}
