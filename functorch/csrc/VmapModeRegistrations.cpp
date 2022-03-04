// Copyright (c) Facebook, Inc. and its affiliates.
// All rights reserved.
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <torch/library.h>


namespace at {
namespace functorch {

TORCH_LIBRARY_IMPL(_, FuncTorchVmapMode, m) {
  m.fallback(torch::CppFunction::makeFallthrough());
}


}
} // namespace at
