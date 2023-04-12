data {
   int N;
   real heights[N];
}

parameters {
   real<lower=0> mu;
   real<lower=0> sigma;
}

model {
    mu ~ normal(170, 15);
    sigma ~ normal(10, 2);
    heights ~ normal(mu, sigma);
}

generated quantities {
   real<lower=0> height;
   height = normal_rng(mu, sigma);
}