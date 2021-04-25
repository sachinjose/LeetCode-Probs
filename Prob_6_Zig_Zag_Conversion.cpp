#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

string convert(string s, int numRows) {
    string ans;
    int strlength = s.size()-1;
    if((s.size() < numRows)||(numRows == 1)){
    	return s;
    }
    for (int i = 0; i < numRows; i++){
    	int step = 2*numRows - 2;
    	int border = 2*(numRows - (i+1));
    	int index = i;
    	bool flag = false;

    	while(index <= strlength){
			ans+=s[index];
			if(index == strlength){
				break;
			}
    		if(flag == false){
    			if((step != border) && (border!=0)){
	    			index+=border;
	    			flag = true;	
    			}
    			else{
    				index+=step;
    			}
    			continue;
    		}
    		if(flag == true){
    			index-=border;
    			index+=step;
    			flag = false;
    			continue;
    		}
    	}
	}	
	return ans;
}

int main(){

	string s = "PAYPALISHIRING";
	string g = convert(s,6);
	cout<<g<<endl;

    return 0;
}