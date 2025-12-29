//REMOVE DUPLICATES FROM THE SORTED ARRAY--(2 POINTER APPROACH)
//keep the pointer stating i and keep pointer j it is common to i then go ahead it if its unique then i pointer move forward and move j forward and check for unique values.

//PSEUDO CODE

#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates (vector<int> &arr, int){
	int i = 0;
	for(int j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;
}
