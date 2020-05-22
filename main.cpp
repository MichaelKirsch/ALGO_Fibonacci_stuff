#include <iostream>

#include <iostream>
#include <array>
#include <vector>

using namespace std;

unsigned long fibo_rec(unsigned long n)
{
    if(n<=1)
        return 1;
    else
        return fibo_rec(n-1)+fibo_rec(n-2);
}

unsigned long fibo2(const int n)
{
    std::vector<unsigned long> fibo_array;
    fibo_array.emplace_back(1);
    fibo_array.emplace_back(1);
    for(int x=2;x<n-1;x++)
        fibo_array.emplace_back(fibo_array[x-1]+fibo_array[x-2]);
    //for(auto& x:fibo_array)
      //  std::cout << x << std::endl;
    return fibo_array.back();
}




int main()
{

    std::cout << fibo_rec(10)<<std::endl;
    std::cout << fibo2(1000000);

    return 0;
}

