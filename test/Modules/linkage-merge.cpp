// RUN: rm -rf %t
// RUN: %clang_cc1 -fmodules -fmodules-cache-path=%t -I %S/Inputs %s

#include "linkage-merge-bar.h"

static int f(int);
int f(int);