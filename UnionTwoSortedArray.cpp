//UNION OF TWO SORTED AARAY
//2 POINTER APPROACH
//COMAPRE 'i' and 'j' which is smallest that will be placed on unionArray and the index is moved to next index.
//if one of the array iteration is over we have to do iteration on remaining portion of another array

#include<bits/stdc++.h>
vector <int> sortedArray(vector <int> a, vector <int> b){
	int n1=a.size();
	int n2=b.size();
	int i=0;
	int j=0;
	vector <int> unionArr;
	while(i< n1 && j<n2){
		if(a[i]<=b[j]){
			if(unionArr.size()==0 || unionArr.back(!=a[i])){
				unionArr.push_back(a[i]);
			}
			i++;
		}
		else{
				if(unionArr.size()==0 || unionArr.back(!=a[i])){
				unionArr.push_back(a[i]);
			}
			j++;		
		}
	}
	while(j<n2){
			if(unionArr.size()==0 || unionArr.back(!=a[i])){
				unionArr.push_back(a[i]);
			}
			j++;
     	}
	while(i<n2){
			if(unionArr.size()==0 || unionArr.back(!=a[i])){
				unionArr.push_back(a[i]);
			}
			i++;
	    }
	    return unionArr;
	
}
