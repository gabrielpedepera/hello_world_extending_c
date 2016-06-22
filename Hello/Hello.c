// Include the Ruby headers and goodies
#include "ruby.h"

// Defining a space for information and references about the module to be stored internally
VALUE Hello = Qnil;

// Prototype for the initialization method - Ruby calls this, not you
void Init_hello();

// Prototype for our method 'hello' - methods are prefixed by 'method_' here
VALUE method_hello(VALUE self);

// The initialization method for this module
void Init_hello() {
  Hello = rb_define_module("Hello");
  rb_define_method(Hello, "hello", method_hello, 0);
}

// Our 'hello' method.. it simply returns a value of '10' for now.
VALUE method_hello(VALUE self) {
  printf("%s", "Hello World \n");
  return Qnil;
}
