vector< pair<int,int>>a;
a.push_back(pair<int,int>(x0,0));
a.push_back(pair<int,int>(x1,1));
a.push_back(pair<int,int>(x2,2));
float min = 30000
int a2,b,c;
do{
	if(a[1].first != 0){
		float calc = abs((float)(a[0].first)/(float)(a[1].first)-(float)(a[2].first));
		if(calc<min){
			a2=a[0].second,b=a[1].second,c=a[2].second;
			min = calc;
		} 
	}
	

}while(next_permutation(a.begin(),a.begin()+3));
vector<int> arr;
arr.push_back(a2);
arr.push_back(b);
arr.push_back(c);
return arr;
