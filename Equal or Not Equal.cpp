void solve(){
 
	string s;
	cin>>s;
 
	int c = 0;
 
	for(auto i : s){
		if(i == 'N')
			c++;
	}	
  // Ager ek se jyada N aye to vo ek taraf se to not equal bol dega but dusre taraf se contradiction de dega 
	if(c == 1){
		cout<<"NO\n";
	}
  
  //if more than 1 N aye to print yes nahi to print No.
	else
		cout<<"YES\n";
 
}
