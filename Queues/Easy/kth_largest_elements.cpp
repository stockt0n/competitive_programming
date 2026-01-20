class KthLargest {
private:
    // Min-heap to store only the 'k' largest elements
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    int k_size;

public:
    KthLargest(int k, std::vector<int>& nums) {
        k_size = k;
        for (int x : nums) {
            add(x);
        }
    }
    
    int add(int val) {
        // 1. Add the new value to the heap
        minHeap.push(val);
        
        // 2. If the heap exceeds size k, remove the smallest element
        if (minHeap.size() > k_size) {
            minHeap.pop();
        }
        
        // 3. The top of the min-heap is now the kth largest element
        return minHeap.top();
    }
};