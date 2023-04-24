class MySort
{
public:
  Mysort();
  int const SIZE=9;
  int bucket[10][SIZE+1];
  void sort(int a[]);

  
private:
  int determineMaximumDigits(int a[], int size);
  void distributeValues(int a[], int maximumDigits);
  void collectValues(int a[]);
  void resetBucket();
  void printBucket();
  };