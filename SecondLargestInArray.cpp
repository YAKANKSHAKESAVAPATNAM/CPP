//pseudoCode for second largest element in an array
//	int secondlargest(vector<int> &arr,int n){
//		int largest=arr[0];
//		int slargest=-1;
//		for(int i=1;i<n;i++){
//			if(arr[i]>largest){
//				slargest=largest;
//				largest=arr[i];
//			}
//			else if(arr[i]<largest && arr[i]>largest){
//				slargest=arr[i];
//			}
//		}
//		return slargest;
//	}

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=arr[0];
        int slargest=-1;
        for (int i=1;i<arr.size();i++){
            if(arr[i]>largest){
                slargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>slargest){
                slargest=arr[i];
            }
        }
        return slargest;
    }
};


