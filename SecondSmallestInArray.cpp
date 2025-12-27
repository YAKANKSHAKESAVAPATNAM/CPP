//second smallest element in an array
//pseudocode

int smallest=arr[0];
int ssmallest=INT_MAX;
for (int i=1;i<n;i++){
	if(arr[i]<smallest){
		ssmallest=smallest;
		smallest=arr[i];
	}
	else if(arr[i]!=smallest && arr[i]<smallest){
		smallest=arr[i];
	}
}
return smallest;
}
