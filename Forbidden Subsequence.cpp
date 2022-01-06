void solve(){
 
	string s , t;
	cin>>s>>t;
 
	sort(s.begin(),s.end());
 
 
	int t0last = -1;
 
	int t1first = -1;
	int t1last = -1;
	
	int t2first = -1;
	int t2last = -1;
 
	for(int i = 0;i < s.size();i++){
		
		if(s[i] == t[1]){
			t1first = i;
			break;
		}
	}
 
	for(int i = 0;i<s.size();i++){
		
		if(s[i] == t[2]){
			t2first = i;
			break;
		}
	}
 
	for(int i = 0;i < s.size();i++){
 
		if(s[i] == t[0]){
 
			t0last = i;
			continue;
		}
	}
 
	for(int i = 0;i < s.size();i++){
 
		if(s[i] == t[1]){
			t1last = i;
			continue;
		}
	}
 
	for(int i = 0;i < s.size();i++){
 
		if(s[i] == t[2]){
			t2last = i;
			continue;
		}
	}
 
	if(t0last != -1 and t1last != -1 and t2last != -1){
 
		if(t0last < t1last and t1last < t2last){
 
			string ans = "";
 
			int len1 = t0last +  1;
 
			while(len1--){
				ans += t[0];
			}
 
			int len2 = t2last - t2first + 1;
			while(len2--){
				ans += t[2];
			}
 
			int len3 = t1last - t1first + 1;
			while(len3--){
				ans += t[1];
			}
 
			string remain = s.substr(t2last + 1);
			ans += remain;
 
			cout<<ans<<endl;
			return;
 
		}
 
		else{
			cout<<s<<endl;
			return;
		}
	}
 
	else{
 
		cout<<s<<endl;
		return;
	}
 
	
}
 
