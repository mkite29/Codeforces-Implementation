void solve(){
 
	int n;
	cin>>n;
 
	vector<int> arr(n);
	unordered_map<int,int> mp;
 	
	//phle sab ka abs le lia 
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
		mp[abs(arr[i])]++;
	}
 
	int res = 0;
 	//and ager map mei vo number ek baar aya hai use 1 baar hi le sakte hai
	for(auto i : mp){
 
		if(i.second == 1){
			res++;
		}
 		//ager do baar aya hai to use 2 tarike se le sakte hai ek khud and ek negative ban ker.
		else {
			res+=2;
			if(i.first == 0){
				res--;
			}
		}
 
 
	}
	
	cout<<res<<endl;
}
