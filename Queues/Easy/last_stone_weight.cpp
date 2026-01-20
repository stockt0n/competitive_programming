class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
        // Step 1: Initialize Max-Heap with all stones
        // By default, std::priority_queue is a max-heap
        std::priority_queue<int> pq(stones.begin(), stones.end());

        // Step 2: Smash stones until 0 or 1 remains
        while (pq.size() > 1) {
            int first = pq.top();  // Heaviest stone
            pq.pop();
            
            int second = pq.top(); // Second heaviest stone
            pq.pop();

            if (first != second) {
                pq.push(first - second); // Push the remainder back
            }
        }

        // Step 3: Return the last stone weight or 0 if none left
        return pq.empty() ? 0 : pq.top();
    }
};