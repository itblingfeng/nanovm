#include "stack.internal.h"

int NanoVM_GLOBAL_init_stack() {
  // TODO
  debug_log0("NanoVM_GLOBAL_init_stack");
  return 0;
}

stack_mgr_t* NanoVM_create_stack_mgr(nanovm_t* vm, int frame_cap) {
  // TODO
  debug_log0("NanoVM_create_stack_mgr");
  return NULL;
}

void NanoVM_release_stack_mgr(stack_mgr_t* stack_mgr) {
  // TODO
  debug_log0("NanoVM_release_stack_mgr");
}

stack_t* NanoVM_create_stack(nanovm_t* vm) {
  // TODO
  debug_log0("NanoVM_create_stack");
  return NULL;
}

void NanoVM_release_stack(stack_t* stack) {
  // TODO
  debug_log0("NanoVM_release_stack");
}

frame_t* NanoVM_create_frame(stack_t* stack, meth_t* meth, int local_var_len, object_t** local_vars) {
  // TODO
  debug_log0("NanoVM_create_frame");
  return NULL;
}

frame_t* NanoVM_frame_pop(stack_t* stack) {
  // TODO
  debug_log0("NanoVM_frame_pop");
  return NULL;
}

object_t* NanoVM_op_pop(frame_t* frame) {
  // TODO
  debug_log0("NanoVM_op_pop");
  return NULL;
}

int NanoVM_op_push(frame_t* frame, object_t* var) {
  // TODO
  debug_log0("NanoVM_op_push");
  return 0;
}

object_t* NanoVM_get_local(frame_t* frame, int index) {
  // TODO
  debug_log0("NanoVM_get_local");
  return NULL;
}

int NanoVM_set_local(frame_t* frame, int index, object_t* var) {
  // TODO
  debug_log0("NanoVM_set_local");
  return 0;
}

int NanoVM_rm_local(frame_t* frame, int index) {
  // TODO
  debug_log0("NanoVM_rm_local");
  return 0;
}

void STACK_release_stack(stack_t* stack) {
  // TODO
  debug_log0("STACK_release_stack");
}

void STACK_release_frame(frame_t* frame) {
  // TODO
  debug_log0("STACK_release_frame");
}
