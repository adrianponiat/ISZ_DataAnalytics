data {
   int N_years;
   vector[N_years] miles_flown;
   int y_fit[N_years];
}

parameters {
   real alpha_;
   real theta_;
}

transformed parameters {
   vector[N_years] lambda = exp(alpha_ + theta_ * miles_flown);
}

model {
    alpha_ ~ normal(3, 1.2);
    theta_ ~ normal(0.1, 0.01);
    for (n in 1:N_years){
      y_fit[n] ~ poisson(lambda[n]);
   }
}

generated quantities {
   int<lower=0> accidents[N_years];
   for (n in 1:N_years){
      accidents[n] = poisson_rng(lambda[n]);
   }
}