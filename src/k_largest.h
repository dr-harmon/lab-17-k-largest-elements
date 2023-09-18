#pragma once

#include <vector>

// Finds the k-largest elements in the given vector. The elements are returned in
// ascending order. The ordering of duplicate elements is undefined.
template <typename T>
std::vector<T> findLargest(const std::vector<T>& v, int k)
{
    std::vector<T> largest;

    for (auto i = v.begin(); i != v.end(); i++) {
        largest.push_back(*i);
        sort(largest.begin(), largest.end(), [](T &t1, T &t2){ return t1 > t2; });
        if (largest.size() > k) {
            largest.pop_back();
        }
    }

    reverse(largest.begin(), largest.end());
    return largest;
}
