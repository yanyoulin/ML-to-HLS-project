#ifndef WEIGHTS_H
#define WEIGHTS_H

#include "common.h"

const data_t dense1_bias[4] = {
    data_t(-0.18848938), data_t(-0.04353923), data_t(-0.29377037), data_t(0.33009186)
};

const data_t dense1_kernel[4][4] = {
    {data_t(-0.46450320), data_t(-0.49924409), data_t(-0.46714443), data_t(-0.14606571)},
    {data_t(-0.11322298), data_t(0.04307497), data_t(-0.89977169), data_t(0.08848519)},
    {data_t(-0.18565185), data_t(0.78377521), data_t(-0.78963846), data_t(0.44269261)},
    {data_t(-0.08304161), data_t(0.37219995), data_t(-0.79252213), data_t(0.21983863)},
};

const data_t dense2_bias[4] = {
    data_t(0.32592928), data_t(0.06635238), data_t(0.33026341), data_t(0.43434262)
};

const data_t dense2_kernel[4][4] = {
    {data_t(-0.56986362), data_t(-0.63096750), data_t(0.08221495), data_t(-0.21289189)},
    {data_t(-0.01997856), data_t(-0.42930806), data_t(-0.37644243), data_t(-0.01591939)},
    {data_t(-0.15454727), data_t(-0.89009100), data_t(0.43262687), data_t(-0.27386871)},
    {data_t(0.12568121), data_t(0.74908596), data_t(0.62900805), data_t(0.01687102)},
};

#endif
