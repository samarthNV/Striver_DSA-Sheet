// Using Recursion

    // double myPow(double x, int n) {
    //   if (n==0) return 1.0;
    //   int n_mod2=n%2;
    //   double a=1.0;
    //   switch(n_mod2)
    //   {
    //       case 0:a=1;
    //         break;
    //       case 1: a=x;
    //         break;
    //       case -1: a=1.0/x;
    //         break;
    //   }
    //   return myPow( x*x, n/2)*a;
    // }

// Optimal Solution

    // double myPow(double x, int n) {
    
    //     double ans = 1;
    //     long long num = abs(n);
    //     while(num){
    //         if(num%2 == 0){
    //             x = x*x;
    //             num/=2;
    //         }else{
    //             ans *= x;
    //             num -= 1;
    //         }
    //     }
    //     if(n < 0){
    //         ans = 1/(double)ans;
    //     }
    //     return ans;
    
    // }