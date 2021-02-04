//finding the highest set bit 


int setBitNumber(unsigned int n) 
{ 
    if (n == 0) 
        return 0; 
  
    int msb = 0; 
    while (n != 0) { 
        n = n / 2; 
        msb++; 
    } 
  
    return (--msb); 
}

int main() 
{ 
   unsigned int n;
scanf("%d",&n); 
  printf("%d",setBitNumber(n)); 
    return 0; 
} 

