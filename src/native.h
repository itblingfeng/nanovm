#ifndef NANOVM_NATIVE_H
#define NANOVM_NATIVE_H 1

#include "util.h"
#include "nanovm.h"
#include "code.h"
#include "stack.h"

typedef struct _native_meth_ native_meth_t;

// native_handle_t :: native_meth_t -> frame_t -> object_t -> [object_t]
// params: native_meth_ref -> current_frame -> the_calling_instance_maybe_null -> arguments
typedef object_t* (*native_handle_t)(native_meth_t*, frame_t*, object_t*, object_t**);

typedef struct _native_meth_ {
      char is_static;
     char* name;
   type_t* dec_type;
   type_t* ret_type;
       int param_len;
  type_t** param_types;
} native_meth_t;

int NanoVM_GLOBAL_init_native();

native_meth_t* NanoVM_get_native_meth(ref_type_t* ref_type, char* name, type_t* ret_type, int param_len, type_t** param_types);

#endif
