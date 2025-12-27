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

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int secondlargest(vector<int> &arr, int n) {
        int largest = arr[0];
        int slargest = -1;

        for (int i = 1; i < n; i++) {
            if (arr[i] > largest) {
                slargest = largest;
                largest = arr[i];
            }
            else if (arr[i] < largest && arr[i] > slargest) {
                slargest = arr[i];
            }
        }
        return slargest;
    }
};

int main() {
    vector<int> arr = {10, 20, 49, 45, 99};
    Solution s;
    cout << "Second largest: " << s.secondlargest(arr, arr.size()) << endl;
    return 0;
}
