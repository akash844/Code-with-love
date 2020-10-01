/* Function to get sum of digits */
int sumOfDigits(int n) 
{  
   int sum = 0; 
   while (n != 0) 
   { 
       sum = sum + n % 10; 
       n = n/10; 
   } 
   return sum; 
} 
  
int main() 
{ 
  int n = 3213; 
  printf(" %d ", sumOfDigits(n)); 
  return 0; 
} 
