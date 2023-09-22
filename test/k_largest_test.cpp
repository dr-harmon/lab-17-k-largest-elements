#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark_all.hpp>

#include "k_largest.h"

using namespace std;

TEST_CASE("The k-largest elements can be found in a vector")
{
    REQUIRE(findLargest(vector<int>{5, 4, 3, 2, 1}, 1) == vector<int>{5});
    REQUIRE(findLargest(vector<int>{5, 4, 3, 2, 1}, 2) == vector<int>{4, 5});
    REQUIRE(findLargest(vector<int>{5, 4, 3, 2, 1}, 5) == vector<int>{1, 2, 3, 4, 5});

    REQUIRE(findLargest(vector<int>{1, 2, 3, 4, 5}, 2) == vector<int>{4, 5});
}

/*
TEST_CASE("k-largest benchmarks")
{
    BENCHMARK_ADVANCED("n=5k, k=100")(Catch::Benchmark::Chronometer meter) {
        const int n = 5000;
        const int k = 100;
        vector<int> v(n, 0);
        meter.measure([&v,k] {
            return findLargest(v, k);
        });
    };

    BENCHMARK_ADVANCED("n=10k, k=100")(Catch::Benchmark::Chronometer meter) {
        const int n = 10000;
        const int k = 100;
        vector<int> v(n, 0);
        meter.measure([&v,k] {
            return findLargest(v, k);
        });
    };

    BENCHMARK_ADVANCED("n=15k, k=100")(Catch::Benchmark::Chronometer meter) {
        const int n = 15000;
        const int k = 100;
        vector<int> v(n, 0);
        meter.measure([&v,k] {
            return findLargest(v, k);
        });
    };

    BENCHMARK_ADVANCED("n=20k, k=100")(Catch::Benchmark::Chronometer meter) {
        const int n = 20000;
        const int k = 100;
        vector<int> v(n, 0);
        meter.measure([&v,k] {
            return findLargest(v, k);
        });
    };

    BENCHMARK_ADVANCED("n=25k, k=100")(Catch::Benchmark::Chronometer meter) {
        const int n = 25000;
        const int k = 100;
        vector<int> v(n, 0);
        meter.measure([&v,k] {
            return findLargest(v, k);
        });
    };
}
*/
