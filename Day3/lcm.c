int hcf(int a,int b){
    while(b!=0){
     int temp=b;
     b=a%b;
     a=temp;
    }
    return a;
}
int smallestEvenMultiple(int n) {
   int lcm;
   lcm=(n*2)/hcf(n,2);
  
   return lcm ;
}
