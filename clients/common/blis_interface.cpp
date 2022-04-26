/* ************************************************************************
 * Copyright (c) 2019-2022 Advanced Micro Devices, Inc.
 * ************************************************************************ */

#include "blis.h"
#include "omp.h"

void setup_blis()
{
#ifndef WIN32
    bli_init();
#endif
}

static int initialize_blis = (setup_blis(), 0);
