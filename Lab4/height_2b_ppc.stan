data {
   int N;
   real weight[N];
}

generated quantities {
   real<lower=0> mu = normal_rng(170, 15);
   real<lower=0> sigma = normal_rng(10, 2);
   int primary_sigma = 15;
    
   //real<lower=0> height = normal_rng(mu, sigma);

   real alpha_ = normal_rng(170, 15);
   real beta_ = lognormal_rng(0, 1);

   real height[N];
   for (n in 1:N)
      height[n] = normal_rng(alpha_ + beta_ * weight[n], primary_sigma);
}
