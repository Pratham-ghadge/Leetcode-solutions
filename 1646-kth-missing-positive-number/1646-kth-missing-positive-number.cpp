class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0;
        int right = arr.size() - 1;

        

        while(left <= right){
            int mid = left + (right - left) / 2;

            int count = arr[mid] - (mid + 1);

            if( count < k ){
                left = mid + 1;
            }else{
                right = mid - 1;
            }

        }

        return left+k;
    }
};

//         int maxele = *max_element(arr.begin(), arr.end());
//         int count = 0;

//         for (int i = 1; i < maxele; i++) {
//             if (!binaraysearch(arr, i)) {
//                 count++;
//             }

//             if (count == k) {
//                 return i;
//             }
//         }
//         return maxele + (k - count);
//     }

//     bool binaraysearch(vector<int>& arr, int key) {
//         int left = 0;
//         int right = arr.size() -1;

//         while (left <= right) {

//             int mid = left + (right - left) / 2;

//             if (arr[mid] == key) {
//                 return true;
//             } else if (arr[mid] > key) {
//                 right = mid - 1;
//             } else {
//                 left = mid + 1;
//             }
//         }
//         return false;
//     }
// };