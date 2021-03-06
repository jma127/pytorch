#include <torch/nn/options/linear.h>

namespace torch {
namespace nn {

LinearOptions::LinearOptions(int64_t in, int64_t out) : in_(in), out_(out) {}

BilinearOptions::BilinearOptions(int64_t in1_features, int64_t in2_features, int64_t out_features)
  : in1_features_(in1_features), in2_features_(in2_features), out_features_(out_features) {}

} // namespace nn
} // namespace torch
