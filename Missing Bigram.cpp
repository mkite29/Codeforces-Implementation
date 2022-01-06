void solve(){
 
	int n;
	cin>>n;
 
	vector<pair<char,char>> pairs(n-2);
 
	for(int i = 0;i<n-2;i++){
		cin>>pairs[i].first>>pairs[i].second;
	}
 
	vector<pair<char,char>> full;
 
	int breakpoint = -1;
	bool ismiss = false;
 
	for(int i = 0;i<n-3;i++){
 
		if(pairs[i].second != pairs[i+1].first){
			ismiss = true;
			full.push_back(pairs[i]);
			full.push_back( { pairs[i].second , pairs[i+1].first});
		}
		else
		{
			full.push_back(pairs[i]);
		}
	}
 
	if(n==3){
		full.push_back(pairs[n-3]);
		full.push_back(pairs[n-3]);
	}
 
 
	if(n > 3){
 
		full.push_back(pairs[n-3]);
 
		if(!ismiss){
			full.push_back({pairs[n-3].second , 'a'});
	
		}
 
	}
 
	string ans = "";
 
	ans += full[0].first;
 
	for(int i = 1;i<full.size();i++){
		ans += full[i].first;
	}
 
	ans += full[full.size() - 1].second;
 
	cout<<ans<<endl;
 
}
