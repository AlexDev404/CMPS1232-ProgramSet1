class MySort
{
public:
 
  const static int SIZE=9;
  int bucket[10][SIZE+1];
  void sort(int a[]);

  
private:
MySort Mysort();
  int determineMaximumDigits(int a[], int size);
  void distributeValues(int a[], int maximumDigits);
  void collectValues(int a[]);
  void resetBucket();
  void printBucket();
  };
