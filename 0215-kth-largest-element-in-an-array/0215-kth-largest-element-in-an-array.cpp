class Solution {
public:

  void Merge(vector<int> &vec, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (vec[left] <= vec[right])
        {
            temp.push_back(vec[left]);
            left++;
        }
        else
        {
            temp.push_back(vec[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(vec[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(vec[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        vec[i] = temp[i - low];
    }
}

void Mergesort(vector<int> &vec, int low, int high)
{
    // base Case
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;
    Mergesort(vec, low, mid);
    Mergesort(vec, mid + 1, high);
    Merge(vec, low, mid, high);
}
    
    int findKthLargest(vector<int>& nums, int k) {
         int n = nums.size(); 
       Mergesort(nums,0,n -1);
    
       return nums[n - k];
        
    }
};