generated quantities {
    real<lower=0> mu = normal_rng(170, 15);
    real<lower=0> sigma = normal_rng(10, 2);
    
    real<lower=0> height = normal_rng(mu, sigma);
}