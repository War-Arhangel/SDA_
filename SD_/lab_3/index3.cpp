class Solution {
public:
    void heapify(vector<int>& a, int n, int i) {
        while (true) {
            int largest = i;
            int l = 2 * i + 1;
            int r = 2 * i + 2;

            if (l < n && a[l] > a[largest]) largest = l;
            if (r < n && a[r] > a[largest]) largest = r;
            if (largest == i) break;

            int tmp = a[i];
            a[i] = a[largest];
            a[largest] = tmp;

            i = largest;
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

         
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, n, i);
        }

         
        for (int end = n - 1; end > 0; end--) {
            int tmp = nums[0];
            nums[0] = nums[end];
            nums[end] = tmp;

            heapify(nums, end, 0);
        }

        return nums;
    }
};