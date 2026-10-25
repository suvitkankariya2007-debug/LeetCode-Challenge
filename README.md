# DSA Practice — LeetCode Solutions

**A public record of my algorithm practice, primarily in C++.**

I use this repository to revisit approaches across arrays, hashing, binary search, linked lists, trees, stacks, and other problem-solving patterns. Individual folders contain a problem statement and its exported solution source.

[LeetCode profile](https://leetcode.com/u/suvitk/) · [Full solution index](PROBLEM_INDEX.md) · [GitHub profile](https://github.com/suvitkankariya2007-debug)

## Start here

| Pattern to explore | Example source |
| --- | --- |
| Two pointers and sorting | [3Sum](0015-3sum/0015-3sum.cpp) |
| Prefix sums and hashing | [Subarray Sum Equals K](0560-subarray-sum-equals-k/0560-subarray-sum-equals-k.cpp) |
| Binary search | [Find Minimum in Rotated Sorted Array](0153-find-minimum-in-rotated-sorted-array/0153-find-minimum-in-rotated-sorted-array.cpp) |
| Linked-list manipulation | [Remove Nth Node From End](0019-remove-nth-node-from-end-of-list/0019-remove-nth-node-from-end-of-list.cpp) |
| Trees and invariants | [Validate Binary Search Tree](0098-validate-binary-search-tree/0098-validate-binary-search-tree.cpp) |
| Stack-based design | [Min Stack](0155-min-stack/0155-min-stack.cpp) |

These are navigation examples, not claims that every stored implementation is optimal, independently tested, or the same approach suggested by the topic label.

## Read and run a solution

1. Open a problem folder or use the [full index](PROBLEM_INDEX.md).
2. Read its `README.md` for the original problem contract.
3. Inspect the source file and compare the approach with its edge cases and complexity.
4. Run it in the matching LeetCode problem environment, or supply your own local harness and required node types/includes.

Most files are judge-style `Solution` classes rather than standalone programs with a `main()`. The repository also contains a small number of Java and Python solutions. Stored code alone does not establish an accepted verdict or a verified solved-problem total.

Folder prefixes come from the exporter and can differ from LeetCode's displayed problem number. Use the problem title and statement link to identify a problem rather than interpreting the numeric folder prefix as its official ID.

## Navigation notes

The full index below is a snapshot of the files present when it was generated; newer exports may appear before the index is refreshed. The topic section is maintained by the solution exporter. Topic tags describe the problem and may include approaches not used in my particular solution.

<details>
<summary>Browse the topic index</summary>


<!---LeetCode Topics Start-->
## Topic index
### Array
|  |
| ------- |
| [0015-3sum](0015-3sum/) |
| [0018-4sum](0018-4sum/) |
| [0031-next-permutation](0031-next-permutation/) |
| [0048-rotate-image](0048-rotate-image/) |
| [0054-spiral-matrix](0054-spiral-matrix/) |
| [0056-merge-intervals](0056-merge-intervals/) |
| [0057-insert-interval](0057-insert-interval/) |
| [0066-plus-one](0066-plus-one/) |
| [0217-contains-duplicate](0217-contains-duplicate/) |
| [0088-merge-sorted-array](0088-merge-sorted-array/) |
| [0121-best-time-to-buy-and-sell-stock](0121-best-time-to-buy-and-sell-stock/) |
| [0128-longest-consecutive-sequence](0128-longest-consecutive-sequence/) |
| [0153-find-minimum-in-rotated-sorted-array](0153-find-minimum-in-rotated-sorted-array/) |
| [0347-top-k-frequent-elements](0347-top-k-frequent-elements/) |
| [0349-intersection-of-two-arrays](0349-intersection-of-two-arrays/) |
| [0496-next-greater-element-i](0496-next-greater-element-i/) |
| [0560-subarray-sum-equals-k](0560-subarray-sum-equals-k/) |
| [0575-distribute-candies](0575-distribute-candies/) |
| [0628-maximum-product-of-three-numbers](0628-maximum-product-of-three-numbers/) |
| [0940-fruit-into-baskets](0940-fruit-into-baskets/) |
| [0941-sort-array-by-parity](0941-sort-array-by-parity/) |
| [0948-sort-an-array](0948-sort-an-array/) |
| [1019-squares-of-a-sorted-array](1019-squares-of-a-sorted-array/) |
| [1603-running-sum-of-1d-array](1603-running-sum-of-1d-array/) |
| [2106-find-greatest-common-divisor-of-array](2106-find-greatest-common-divisor-of-array/) |
| [2447-merge-similar-items](2447-merge-similar-items/) |
| [3163-subarrays-distinct-element-sum-of-squares-i](3163-subarrays-distinct-element-sum-of-squares-i/) |
| [3799-unique-3-digit-even-numbers](3799-unique-3-digit-even-numbers/) |
| [3869-smallest-index-with-digit-sum-equal-to-index](3869-smallest-index-with-digit-sum-equal-to-index/) |
| [3950-maximum-k-to-sort-a-permutation](3950-maximum-k-to-sort-a-permutation/) |
| [4078-maximum-alternating-sum-of-squares](4078-maximum-alternating-sum-of-squares/) |
| [4107-find-missing-elements](4107-find-missing-elements/) |
| [4258-construct-uniform-parity-array-ii](4258-construct-uniform-parity-array-ii/) |
| [4285-smallest-stable-index-ii](4285-smallest-stable-index-ii/) |
### Hash Table
|  |
| ------- |
| [0217-contains-duplicate](0217-contains-duplicate/) |
| [0128-longest-consecutive-sequence](0128-longest-consecutive-sequence/) |
| [0142-linked-list-cycle-ii](0142-linked-list-cycle-ii/) |
| [0202-happy-number](0202-happy-number/) |
| [0347-top-k-frequent-elements](0347-top-k-frequent-elements/) |
| [0349-intersection-of-two-arrays](0349-intersection-of-two-arrays/) |
| [0496-next-greater-element-i](0496-next-greater-element-i/) |
| [0560-subarray-sum-equals-k](0560-subarray-sum-equals-k/) |
| [0575-distribute-candies](0575-distribute-candies/) |
| [0940-fruit-into-baskets](0940-fruit-into-baskets/) |
| [2447-merge-similar-items](2447-merge-similar-items/) |
| [3163-subarrays-distinct-element-sum-of-squares-i](3163-subarrays-distinct-element-sum-of-squares-i/) |
| [3799-unique-3-digit-even-numbers](3799-unique-3-digit-even-numbers/) |
| [4107-find-missing-elements](4107-find-missing-elements/) |
### Sorting
|  |
| ------- |
| [0015-3sum](0015-3sum/) |
| [0018-4sum](0018-4sum/) |
| [0056-merge-intervals](0056-merge-intervals/) |
| [0217-contains-duplicate](0217-contains-duplicate/) |
| [0088-merge-sorted-array](0088-merge-sorted-array/) |
| [0148-sort-list](0148-sort-list/) |
| [0347-top-k-frequent-elements](0347-top-k-frequent-elements/) |
| [0349-intersection-of-two-arrays](0349-intersection-of-two-arrays/) |
| [0628-maximum-product-of-three-numbers](0628-maximum-product-of-three-numbers/) |
| [0941-sort-array-by-parity](0941-sort-array-by-parity/) |
| [0948-sort-an-array](0948-sort-an-array/) |
| [1019-squares-of-a-sorted-array](1019-squares-of-a-sorted-array/) |
| [2447-merge-similar-items](2447-merge-similar-items/) |
| [3859-maximum-product-of-two-digits](3859-maximum-product-of-two-digits/) |
| [4078-maximum-alternating-sum-of-squares](4078-maximum-alternating-sum-of-squares/) |
| [4107-find-missing-elements](4107-find-missing-elements/) |
### Ordered Set
|  |
| ------- |
| [2447-merge-similar-items](2447-merge-similar-items/) |
### Two Pointers
|  |
| ------- |
| [0015-3sum](0015-3sum/) |
| [0018-4sum](0018-4sum/) |
| [0019-remove-nth-node-from-end-of-list](0019-remove-nth-node-from-end-of-list/) |
| [0031-next-permutation](0031-next-permutation/) |
| [0082-remove-duplicates-from-sorted-list-ii](0082-remove-duplicates-from-sorted-list-ii/) |
| [0088-merge-sorted-array](0088-merge-sorted-array/) |
| [0125-valid-palindrome](0125-valid-palindrome/) |
| [0142-linked-list-cycle-ii](0142-linked-list-cycle-ii/) |
| [0148-sort-list](0148-sort-list/) |
| [0202-happy-number](0202-happy-number/) |
| [0344-reverse-string](0344-reverse-string/) |
| [0349-intersection-of-two-arrays](0349-intersection-of-two-arrays/) |
| [0528-swapping-nodes-in-a-linked-list](0528-swapping-nodes-in-a-linked-list/) |
| [0941-sort-array-by-parity](0941-sort-array-by-parity/) |
| [1019-squares-of-a-sorted-array](1019-squares-of-a-sorted-array/) |
### Math
|  |
| ------- |
| [0048-rotate-image](0048-rotate-image/) |
| [0066-plus-one](0066-plus-one/) |
| [0202-happy-number](0202-happy-number/) |
| [0326-power-of-three](0326-power-of-three/) |
| [0412-fizz-buzz](0412-fizz-buzz/) |
| [0628-maximum-product-of-three-numbers](0628-maximum-product-of-three-numbers/) |
| [0866-rectangle-overlap](0866-rectangle-overlap/) |
| [2106-find-greatest-common-divisor-of-array](2106-find-greatest-common-divisor-of-array/) |
| [2383-add-two-integers](2383-add-two-integers/) |
| [2556-convert-the-temperature](2556-convert-the-temperature/) |
| [2608-count-the-digits-that-divide-a-number](2608-count-the-digits-that-divide-a-number/) |
| [3859-maximum-product-of-two-digits](3859-maximum-product-of-two-digits/) |
| [3869-smallest-index-with-digit-sum-equal-to-index](3869-smallest-index-with-digit-sum-equal-to-index/) |
| [4084-maximize-sum-of-squares-of-digits](4084-maximize-sum-of-squares-of-digits/) |
| [4245-count-commas-in-range](4245-count-commas-in-range/) |
| [4258-construct-uniform-parity-array-ii](4258-construct-uniform-parity-array-ii/) |
### Prefix Sum
|  |
| ------- |
| [0560-subarray-sum-equals-k](0560-subarray-sum-equals-k/) |
| [1603-running-sum-of-1d-array](1603-running-sum-of-1d-array/) |
| [4285-smallest-stable-index-ii](4285-smallest-stable-index-ii/) |
### Divide and Conquer
|  |
| ------- |
| [0148-sort-list](0148-sort-list/) |
| [0347-top-k-frequent-elements](0347-top-k-frequent-elements/) |
| [0948-sort-an-array](0948-sort-an-array/) |
### Heap (Priority Queue)
|  |
| ------- |
| [0347-top-k-frequent-elements](0347-top-k-frequent-elements/) |
| [0948-sort-an-array](0948-sort-an-array/) |
### Merge Sort
|  |
| ------- |
| [0148-sort-list](0148-sort-list/) |
| [0948-sort-an-array](0948-sort-an-array/) |
### Bucket Sort
|  |
| ------- |
| [0347-top-k-frequent-elements](0347-top-k-frequent-elements/) |
| [0948-sort-an-array](0948-sort-an-array/) |
### Radix Sort
|  |
| ------- |
| [0948-sort-an-array](0948-sort-an-array/) |
### Counting Sort
|  |
| ------- |
| [0347-top-k-frequent-elements](0347-top-k-frequent-elements/) |
| [0948-sort-an-array](0948-sort-an-array/) |
### Binary Search
|  |
| ------- |
| [0153-find-minimum-in-rotated-sorted-array](0153-find-minimum-in-rotated-sorted-array/) |
| [0349-intersection-of-two-arrays](0349-intersection-of-two-arrays/) |
### String
|  |
| ------- |
| [0125-valid-palindrome](0125-valid-palindrome/) |
| [0344-reverse-string](0344-reverse-string/) |
| [0412-fizz-buzz](0412-fizz-buzz/) |
| [0886-score-of-parentheses](0886-score-of-parentheses/) |
| [1078-remove-outermost-parentheses](1078-remove-outermost-parentheses/) |
| [1208-maximum-nesting-depth-of-two-valid-parentheses-strings](1208-maximum-nesting-depth-of-two-valid-parentheses-strings/) |
### Simulation
|  |
| ------- |
| [0054-spiral-matrix](0054-spiral-matrix/) |
| [0412-fizz-buzz](0412-fizz-buzz/) |
### Number Theory
|  |
| ------- |
| [2106-find-greatest-common-divisor-of-array](2106-find-greatest-common-divisor-of-array/) |
### Matrix
|  |
| ------- |
| [0048-rotate-image](0048-rotate-image/) |
| [0054-spiral-matrix](0054-spiral-matrix/) |
### Recursion
|  |
| ------- |
| [0326-power-of-three](0326-power-of-three/) |
| [3799-unique-3-digit-even-numbers](3799-unique-3-digit-even-numbers/) |
### Linked List
|  |
| ------- |
| [0019-remove-nth-node-from-end-of-list](0019-remove-nth-node-from-end-of-list/) |
| [0082-remove-duplicates-from-sorted-list-ii](0082-remove-duplicates-from-sorted-list-ii/) |
| [0114-flatten-binary-tree-to-linked-list](0114-flatten-binary-tree-to-linked-list/) |
| [0142-linked-list-cycle-ii](0142-linked-list-cycle-ii/) |
| [0148-sort-list](0148-sort-list/) |
| [0237-delete-node-in-a-linked-list](0237-delete-node-in-a-linked-list/) |
| [0528-swapping-nodes-in-a-linked-list](0528-swapping-nodes-in-a-linked-list/) |
### Dynamic Programming
|  |
| ------- |
| [0121-best-time-to-buy-and-sell-stock](0121-best-time-to-buy-and-sell-stock/) |
### Quicksort
|  |
| ------- |
| [0056-merge-intervals](0056-merge-intervals/) |
### Union-Find
|  |
| ------- |
| [0128-longest-consecutive-sequence](0128-longest-consecutive-sequence/) |
### Enumeration
|  |
| ------- |
| [3799-unique-3-digit-even-numbers](3799-unique-3-digit-even-numbers/) |
### Stack
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](0094-binary-tree-inorder-traversal/) |
| [0114-flatten-binary-tree-to-linked-list](0114-flatten-binary-tree-to-linked-list/) |
| [0155-min-stack](0155-min-stack/) |
| [0232-implement-queue-using-stacks](0232-implement-queue-using-stacks/) |
| [0496-next-greater-element-i](0496-next-greater-element-i/) |
| [0886-score-of-parentheses](0886-score-of-parentheses/) |
| [1078-remove-outermost-parentheses](1078-remove-outermost-parentheses/) |
| [1208-maximum-nesting-depth-of-two-valid-parentheses-strings](1208-maximum-nesting-depth-of-two-valid-parentheses-strings/) |
### Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](0094-binary-tree-inorder-traversal/) |
| [0098-validate-binary-search-tree](0098-validate-binary-search-tree/) |
| [0110-balanced-binary-tree](0110-balanced-binary-tree/) |
| [0114-flatten-binary-tree-to-linked-list](0114-flatten-binary-tree-to-linked-list/) |
| [0236-lowest-common-ancestor-of-a-binary-tree](0236-lowest-common-ancestor-of-a-binary-tree/) |
| [0450-delete-node-in-a-bst](0450-delete-node-in-a-bst/) |
| [0543-diameter-of-binary-tree](0543-diameter-of-binary-tree/) |
| [0784-insert-into-a-binary-search-tree](0784-insert-into-a-binary-search-tree/) |
### Depth-First Search
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](0094-binary-tree-inorder-traversal/) |
| [0098-validate-binary-search-tree](0098-validate-binary-search-tree/) |
| [0110-balanced-binary-tree](0110-balanced-binary-tree/) |
| [0114-flatten-binary-tree-to-linked-list](0114-flatten-binary-tree-to-linked-list/) |
| [0236-lowest-common-ancestor-of-a-binary-tree](0236-lowest-common-ancestor-of-a-binary-tree/) |
| [0543-diameter-of-binary-tree](0543-diameter-of-binary-tree/) |
### Binary Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](0094-binary-tree-inorder-traversal/) |
| [0098-validate-binary-search-tree](0098-validate-binary-search-tree/) |
| [0110-balanced-binary-tree](0110-balanced-binary-tree/) |
| [0114-flatten-binary-tree-to-linked-list](0114-flatten-binary-tree-to-linked-list/) |
| [0236-lowest-common-ancestor-of-a-binary-tree](0236-lowest-common-ancestor-of-a-binary-tree/) |
| [0450-delete-node-in-a-bst](0450-delete-node-in-a-bst/) |
| [0543-diameter-of-binary-tree](0543-diameter-of-binary-tree/) |
| [0784-insert-into-a-binary-search-tree](0784-insert-into-a-binary-search-tree/) |
### Geometry
|  |
| ------- |
| [0866-rectangle-overlap](0866-rectangle-overlap/) |
### Binary Lifting
|  |
| ------- |
| [0236-lowest-common-ancestor-of-a-binary-tree](0236-lowest-common-ancestor-of-a-binary-tree/) |
### Lowest Common Ancestor
|  |
| ------- |
| [0236-lowest-common-ancestor-of-a-binary-tree](0236-lowest-common-ancestor-of-a-binary-tree/) |
### DP on Trees
|  |
| ------- |
| [0543-diameter-of-binary-tree](0543-diameter-of-binary-tree/) |
### Floyd's Cycle Finding Algorithm
|  |
| ------- |
| [0142-linked-list-cycle-ii](0142-linked-list-cycle-ii/) |
### Sliding Window
|  |
| ------- |
| [0940-fruit-into-baskets](0940-fruit-into-baskets/) |
### Monotonic Stack
|  |
| ------- |
| [0496-next-greater-element-i](0496-next-greater-element-i/) |
### Bracket Sequences
|  |
| ------- |
| [0886-score-of-parentheses](0886-score-of-parentheses/) |
| [1078-remove-outermost-parentheses](1078-remove-outermost-parentheses/) |
| [1208-maximum-nesting-depth-of-two-valid-parentheses-strings](1208-maximum-nesting-depth-of-two-valid-parentheses-strings/) |
### Design
|  |
| ------- |
| [0155-min-stack](0155-min-stack/) |
| [0232-implement-queue-using-stacks](0232-implement-queue-using-stacks/) |
### Binary Search Tree
|  |
| ------- |
| [0098-validate-binary-search-tree](0098-validate-binary-search-tree/) |
| [0450-delete-node-in-a-bst](0450-delete-node-in-a-bst/) |
| [0784-insert-into-a-binary-search-tree](0784-insert-into-a-binary-search-tree/) |
### Greedy
|  |
| ------- |
| [4078-maximum-alternating-sum-of-squares](4078-maximum-alternating-sum-of-squares/) |
| [4084-maximize-sum-of-squares-of-digits](4084-maximize-sum-of-squares-of-digits/) |
### Binary Indexed Tree
|  |
| ------- |
| [3163-subarrays-distinct-element-sum-of-squares-i](3163-subarrays-distinct-element-sum-of-squares-i/) |
### Segment Tree
|  |
| ------- |
| [3163-subarrays-distinct-element-sum-of-squares-i](3163-subarrays-distinct-element-sum-of-squares-i/) |
### Quickselect
|  |
| ------- |
| [0347-top-k-frequent-elements](0347-top-k-frequent-elements/) |
### Queue
|  |
| ------- |
| [0232-implement-queue-using-stacks](0232-implement-queue-using-stacks/) |
### Bit Manipulation
|  |
| ------- |
| [3950-maximum-k-to-sort-a-permutation](3950-maximum-k-to-sort-a-permutation/) |
<!---LeetCode Topics End-->

</details>
