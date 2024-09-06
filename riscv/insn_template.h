// See LICENSE for license details.

#include "arith.h"
#include "mmu.h"
#include "softfloat.h"
#include "posit.h"

using FX16 = posit::BackendFixed<fixedtrait<int16_t,16>,int16_t>;
using FX32 = posit::BackendFixed<fixedtrait<int32_t,32>,int32_t>;
using FX64 = posit::BackendFixed<fixedtrait<int64_t,64>,int32_t >;

#include "internals.h"
#include "specialize.h"
#include "tracer.h"
#include <assert.h>

union pfl {
    float fl;
    float32_t sfl;
};