void solve(){
 
	int a,b,c;
	cin>>a>>b>>c;
 
	if(a!=b && b!= c && c!= a){
 
		int max3 = max({a,b,c});
		
		if(max3 == a){
			if(a == (b+c))cout<<"YES";
			else cout<<"NO";
		}
		else if(max3 == b){
			if(b == (a+c))cout<<"YES";
			else cout<<"NO";	
		}
		else if(max3 == c){
			if(c == (b+a))cout<<"YES";
			else cout<<"NO";
		}
	}
 
	else if(a==b and b != c){
		if(c%2)cout<<"NO";
		else cout<<"YES";
	}
	else if(b==c and b!=a){
		if(a%2)cout<<"NO";
		else cout<<"YES";
	}
	else if(c==a && c!= b){
		if(b%2)cout<<"NO";
		else cout<<"YES";
	}
	else if(a = b = c){
		if(a % 2)cout<<"NO";
		else cout<<"YES";
	}
 
	cout<<endl;
	return;
}
