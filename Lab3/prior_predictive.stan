generated quantities {
   int N = 50;
   int <lower=0, upper=50> y;
   real <lower=0, upper=1> p = fabs(normal_rng(0.20,0.05));

   y = binomial_rng(N, p);

}