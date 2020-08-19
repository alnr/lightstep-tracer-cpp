#pragma once

#if defined(_WIN32)
#include <malloc.h>
#elif defined(__FreeBSD__)
#include <stdlib.h>
#else
#include <alloca.h>
#endif
