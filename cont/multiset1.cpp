// cont/multiset1.cpp

#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

int main()
{
    std::multiset<int, std::greater<int>> coll1;

    coll1.insert({ 4, 3, 5, 1, 6, 2 });
    coll1.insert(5);

    for (int elem : coll1)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;

    auto ipos = coll1.insert(4);
    std::cout << "4 inserted as element "
        << std::distance(coll1.begin(), ipos) + 1 << std::endl;

    std::multiset<int> coll2(coll1.begin(), coll1.end());

    std::copy(coll2.begin(), coll2.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    coll2.erase(coll2.begin(), coll2.find(3));

    int num = coll2.erase(5);
    std::cout << num << " element(s) removed" << std::endl;

    std::copy(coll2.cbegin(), coll2.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}
