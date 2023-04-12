data {
   int N;
   real heights[N];
   real weight[N];
}

parameters {
   real<lower=0> mu;
   real<lower=0> sigma;
   real alpha_;
   real beta_;
}

transformed parameters {
   real mu_arr[N];
   for (n in 1:N){
      mu_arr[n] = alpha_ + beta_ * weight[n];
   }
}

model {
    mu ~ normal(170, 15);
    sigma ~ normal(10, 2);
    alpha_ ~ normal(170, 15);
    beta_ ~ normal(0, 1);
}

generated quantities {
   real<lower=0> height;
   for (n in 1:N){
      height = normal_rng(mu_arr[n], sigma);
   }
}