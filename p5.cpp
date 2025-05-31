#include <iostream>

using std::cout;
using std::endl;

int main(void) {
  Stock stock("NVDA", "NVIDIA Corp");
  stock.setPreviousClosingPrice(27.5);

  // Set current price
  stock.setCurrentPrice(27.6);

  // Display stock info
  cout << "Previous Closing Price: " <<
    stock.getPreviousClosingPrice() << endl;
  cout << "Current Price: " <<
    stock.getCurrentPrice() << endl;
  cout << "Percentage Change: " <<
    stock.getChangePercent() << endl;

  return 0;
}
