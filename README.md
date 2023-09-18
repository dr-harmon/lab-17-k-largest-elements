# Lab 17: Finding the K Largest Elements

A frequent problem in computer applications is "finding the k-th largest elements of n." Examples include:

* Finding the 10 top-scoring players in a sports league (k=10, n=number of players in the league)
* Finding the 50 highest-grossing movies of all time (k=50, n=number of movies ever made)

In these situations, _k_ is relatively small compared to the size of _n_. We may also want to find the _smallest_ elements instead of the largest, but the algorithm would be the same in either case.

If the data is already sorted, then the problem is simple: We simply take the _k_ elements from the top of the list. However, the data may arrive unsorted, and sorting has a cost of _O(n log n)_. Is there a better way?

1. Design and implement an algorithm for finding the _k_ largest elements in an array of size _n_. It must have a better time complexity than sorting. Make sure all unit tests pass.
2. Uncomment the provided benchmark tests, then run them to measure your algorithm and graph its performance. Does the graph match your predicted time complexity?
