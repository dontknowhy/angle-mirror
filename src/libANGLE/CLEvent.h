//
// Copyright 2021 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// CLEvent.h: Defines the cl::Event class, which can be used to track the execution status of an
// OpenCL command.

#ifndef LIBANGLE_CLEVENT_H_
#define LIBANGLE_CLEVENT_H_

#include "libANGLE/CLtypes.h"

namespace cl
{
class Event final
{
  public:
    using IsCLObjectType = std::true_type;
};

}  // namespace cl

#endif  // LIBANGLE_CLEVENT_H_