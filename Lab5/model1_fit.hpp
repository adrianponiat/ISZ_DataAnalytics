
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace model1_fit_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 20> locations_array__ = 
{" (found before start of program)",
 " (in '/home/Lab5/model1_fit.stan', line 8, column 3 to column 15)",
 " (in '/home/Lab5/model1_fit.stan', line 9, column 3 to column 15)",
 " (in '/home/Lab5/model1_fit.stan', line 13, column 3 to column 63)",
 " (in '/home/Lab5/model1_fit.stan', line 25, column 3 to column 35)",
 " (in '/home/Lab5/model1_fit.stan', line 27, column 6 to column 44)",
 " (in '/home/Lab5/model1_fit.stan', line 26, column 23 to line 28, column 4)",
 " (in '/home/Lab5/model1_fit.stan', line 26, column 3 to line 28, column 4)",
 " (in '/home/Lab5/model1_fit.stan', line 17, column 4 to column 28)",
 " (in '/home/Lab5/model1_fit.stan', line 18, column 4 to column 31)",
 " (in '/home/Lab5/model1_fit.stan', line 20, column 6 to column 36)",
 " (in '/home/Lab5/model1_fit.stan', line 19, column 24 to line 21, column 4)",
 " (in '/home/Lab5/model1_fit.stan', line 19, column 4 to line 21, column 4)",
 " (in '/home/Lab5/model1_fit.stan', line 2, column 3 to column 15)",
 " (in '/home/Lab5/model1_fit.stan', line 3, column 10 to column 17)",
 " (in '/home/Lab5/model1_fit.stan', line 3, column 3 to column 31)",
 " (in '/home/Lab5/model1_fit.stan', line 4, column 13 to column 20)",
 " (in '/home/Lab5/model1_fit.stan', line 4, column 3 to column 22)",
 " (in '/home/Lab5/model1_fit.stan', line 13, column 10 to column 17)",
 " (in '/home/Lab5/model1_fit.stan', line 25, column 26 to column 33)"};




class model1_fit_model final : public model_base_crtp<model1_fit_model> {

 private:
  int N_years;
  Eigen::Matrix<double, -1, 1> miles_flown__;
  std::vector<int> y_fit; 
  Eigen::Map<Eigen::Matrix<double, -1, 1>> miles_flown{nullptr, 0};
 
 public:
  ~model1_fit_model() { }
  
  inline std::string model_name() const final { return "model1_fit_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  model1_fit_model(stan::io::var_context& context__,
                   unsigned int random_seed__ = 0,
                   std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "model1_fit_model_namespace::model1_fit_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 13;
      context__.validate_dims("data initialization","N_years","int",
           std::vector<size_t>{});
      N_years = std::numeric_limits<int>::min();
      
      
      current_statement__ = 13;
      N_years = context__.vals_i("N_years")[(1 - 1)];
      current_statement__ = 14;
      stan::math::validate_non_negative_index("miles_flown", "N_years",
                                              N_years);
      current_statement__ = 15;
      context__.validate_dims("data initialization","miles_flown","double",
           std::vector<size_t>{static_cast<size_t>(N_years)});
      miles_flown__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N_years,
          std::numeric_limits<double>::quiet_NaN());
      new (&miles_flown) Eigen::Map<Eigen::Matrix<double, -1, 1>>(miles_flown__.data(), N_years);
        
      
      {
        std::vector<local_scalar_t__> miles_flown_flat__;
        current_statement__ = 15;
        miles_flown_flat__ = context__.vals_r("miles_flown");
        current_statement__ = 15;
        pos__ = 1;
        current_statement__ = 15;
        for (int sym1__ = 1; sym1__ <= N_years; ++sym1__) {
          current_statement__ = 15;
          stan::model::assign(miles_flown, miles_flown_flat__[(pos__ - 1)],
            "assigning variable miles_flown", stan::model::index_uni(sym1__));
          current_statement__ = 15;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 16;
      stan::math::validate_non_negative_index("y_fit", "N_years", N_years);
      current_statement__ = 17;
      context__.validate_dims("data initialization","y_fit","int",
           std::vector<size_t>{static_cast<size_t>(N_years)});
      y_fit = std::vector<int>(N_years, std::numeric_limits<int>::min());
      
      
      current_statement__ = 17;
      y_fit = context__.vals_i("y_fit");
      current_statement__ = 18;
      stan::math::validate_non_negative_index("lambda", "N_years", N_years);
      current_statement__ = 19;
      stan::math::validate_non_negative_index("accidents", "N_years", N_years);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "model1_fit_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ alpha_ = DUMMY_VAR__;
      current_statement__ = 1;
      alpha_ = in__.template read<local_scalar_t__>();
      local_scalar_t__ theta_ = DUMMY_VAR__;
      current_statement__ = 2;
      theta_ = in__.template read<local_scalar_t__>();
      Eigen::Matrix<local_scalar_t__, -1, 1> lambda =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(N_years,
           DUMMY_VAR__);
      current_statement__ = 3;
      stan::model::assign(lambda,
        stan::math::exp(
          stan::math::add(alpha_, stan::math::multiply(theta_, miles_flown))),
        "assigning variable lambda");
      {
        current_statement__ = 8;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(alpha_, 3, 1.2));
        current_statement__ = 9;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(theta_, 0.1, 0.01));
        current_statement__ = 12;
        for (int n = 1; n <= N_years; ++n) {
          current_statement__ = 10;
          lp_accum__.add(
            stan::math::poisson_lpmf<propto__>(
              stan::model::rvalue(y_fit, "y_fit", stan::model::index_uni(n)),
              stan::model::rvalue(lambda, "lambda",
                stan::model::index_uni(n))));
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "model1_fit_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double alpha_ = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      alpha_ = in__.template read<local_scalar_t__>();
      double theta_ = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      theta_ = in__.template read<local_scalar_t__>();
      Eigen::Matrix<double, -1, 1> lambda =
         Eigen::Matrix<double, -1, 1>::Constant(N_years,
           std::numeric_limits<double>::quiet_NaN());
      out__.write(alpha_);
      out__.write(theta_);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 3;
      stan::model::assign(lambda,
        stan::math::exp(
          stan::math::add(alpha_, stan::math::multiply(theta_, miles_flown))),
        "assigning variable lambda");
      if (emit_transformed_parameters__) {
        out__.write(lambda);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      std::vector<int> accidents =
         std::vector<int>(N_years, std::numeric_limits<int>::min());
      current_statement__ = 7;
      for (int n = 1; n <= N_years; ++n) {
        current_statement__ = 5;
        stan::model::assign(accidents,
          stan::math::poisson_rng(
            stan::model::rvalue(lambda, "lambda", stan::model::index_uni(n)),
            base_rng__),
          "assigning variable accidents", stan::model::index_uni(n));
      }
      current_statement__ = 4;
      stan::math::check_greater_or_equal(function__, "accidents", accidents,
                                            0);
      out__.write(accidents);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ alpha_ = DUMMY_VAR__;
      alpha_ = in__.read<local_scalar_t__>();
      out__.write(alpha_);
      local_scalar_t__ theta_ = DUMMY_VAR__;
      theta_ = in__.read<local_scalar_t__>();
      out__.write(theta_);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"alpha_", "theta_", "lambda",
      "accidents"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{},
      std::vector<size_t>{static_cast<size_t>(N_years)},
      std::vector<size_t>{static_cast<size_t>(N_years)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "alpha_");
    param_names__.emplace_back(std::string() + "theta_");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N_years; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "lambda" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N_years; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "accidents" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "alpha_");
    param_names__.emplace_back(std::string() + "theta_");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N_years; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "lambda" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N_years; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "accidents" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha_\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"theta_\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"lambda\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N_years) + "},\"block\":\"transformed_parameters\"},{\"name\":\"accidents\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N_years) + ",\"element_type\":{\"name\":\"int\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha_\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"theta_\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"lambda\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N_years) + "},\"block\":\"transformed_parameters\"},{\"name\":\"accidents\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N_years) + ",\"element_type\":{\"name\":\"int\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (1 + 1);
      const size_t num_transformed = N_years;
      const size_t num_gen_quantities = N_years;
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (1 + 1);
      const size_t num_transformed = N_years;
      const size_t num_gen_quantities = N_years;
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 2> names__{"alpha_", "theta_"};
      const std::array<Eigen::Index, 2> constrain_param_sizes__{1, 1};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}
using stan_model = model1_fit_model_namespace::model1_fit_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return model1_fit_model_namespace::profiles__;
}

#endif


