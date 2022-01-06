void solve(){
 
	int n , m , sr , sc , dr , dc;
	cin >> n >> m >> sr >> sc >> dr >> dc;
 
 
	int time1;
	
	if(sr <= dr){
		time1 = dr - sr;
	}
 
	else{
		time1 = 2*n - sr - dr;
	}
 
	int time2;
 
	if(sc <= dc){
		time2 = dc - sc;
	}
 
	else{
		time2 = 2*m - sc - dc;
	}
 
	cout<<min(time1 , time2)<<endl;
 
}
