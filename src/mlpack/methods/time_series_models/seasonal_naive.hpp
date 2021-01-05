/**
 * @file methods/time_series_models/seasonal_naive.hpp
 * @author Gaurav Ghati
 *
 * Definition of Seasonal Naive Model for time series data
 * 
 * mlpack is free software; you may redistribute it and/or modify it under the
 * terms of the 3-clause BSD license.  You should have received a copy of the
 * 3-clause BSD license along with mlpack.  If not, see
 * http://www.opensource.org/licenses/BSD-3-Clause for more information.
 */
#ifndef MLPACK_METHODS_TIME_SERIES_MODELS_SEASONAL_NAIVE_HPP
#define MLPACK_METHODS_TIME_SERIES_MODELS_SEASONAL_NAIVE_HPP

#include <mlpack/prereqs.hpp>

namespace mlpack {
namespace ts /* Time Series Models */ {

/**
 * This class implements a generic Seasonal Naive Model. Seasonal naive model
 * is a simple forcasting model useful for highly seasonal data. 
 * 
 * @tparam InputData Type of the input data (arma::Row or arma::Col).
 * @param 
 * 
 */
class SeasonalNaiveModel
{
 public:
  /**
   * 
   */
  SeasonalNaiveModel();

  /**
   * @param data: The dataset to train on.
   * @param period: seasonal period of the pattern
   * @param 
   */
};

} // namespace ts
} // namespace mlpack

// Include implementation.
#include "seasonal_naive_impl.hpp"

#endif
