// This file is autogenerated with:
//
// R> tools::package_native_routine_registration_skeleton(".")

#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .C calls */
extern void loglikelihood(void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void loglikelihood_GJR(void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CMethodDef CEntries[] = {
    {"loglikelihood",     (DL_FUNC) &loglikelihood,     9},
    {"loglikelihood_GJR", (DL_FUNC) &loglikelihood_GJR, 9},
    {NULL, NULL, 0}
};

void R_init_mgarchBEKK(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}