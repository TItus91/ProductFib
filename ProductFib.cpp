#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod)
  {
    std::vector<ull> Data { 0, 1, false };
    ull temp;

    while (prod > (Data[0]*Data[1]))
    {
      temp = Data[1];
      Data[1] = Data[0] + Data[1];
      Data[0] = temp;
    }
    
    if (prod == Data[0] * Data[1]) Data[2] = true;

    return Data;
  }
};
