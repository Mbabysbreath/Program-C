#include<bits/stdc++.>
//只能用于大减小，且均为正整数 
using namespace std;
string ans;
int judge(string a,string b){
	int lena=a.size();
	int lenb=b.size();
//	if(lena>lenb||a>b){
//		return 1;
//	}
//	if(lena<lenb||a<b){
//		return -1;
//	}
//	if(a==b){
//		return 0;
//	}
if(lena>lenb) return 1;
  if(lena<lenb) return -1;
  if(a>b) return 1;
  if(a==b) return 0;
  if(a<b) return -1;
}
string sub(string a,string b){
	bool symbol;
	string aa,bb;
	ans.clear();
	aa.clear();
	bb.clear();
	int cnt=judge(a,b);
	if(cnt>0){
		aa=a;
		bb=b;
		symbol=false;
	}else if(cnt<0){
		aa=b;
		bb=a;
		symbol=true;
	}else if(cnt==0){
		//return ans+'0';
		ans=ans+'0';
		return ans;
	}
	reverse(aa.begin(),aa.end());
	reverse(bb.begin(),bb.end());
	int lena=aa.size();
	int lenb=bb.size();
	int i;
	for(i=0;;i++){
		if(i<lena&&i<lenb){
			if(aa[i]>=bb[i]){
			ans+=aa[i]-bb[i]+'0';
		}else if(aa[i]<bb[i]){
			ans+=aa[i]-bb[i]+10+'0';
				for(int j=i+1;;j++){
					if(aa[j]=='0'){
						aa[j]='9';
					}else{
						aa[j]--;
						break;
					}
				}
			}
		}else if(i<lena){
			ans+=aa[i];
		}else if(i<lenb){
			ans+=bb[i];
		} else{
			break;
		}
	}
	while(i--){//注意是i--哦。从数组最后开始
		if(ans[i]-'0'>0){
			break;
		} 
	}
	ans.erase(i+1,lena-i);
	if(symbol) ans+='-';
	reverse(ans.begin(),ans.end());
	return ans;
}
int main(){
	string a,b;
	while(cin>>a>>b){
		cout<<sub(a,b)<<endl;
	}
	return 0;
} 
