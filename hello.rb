# Load in the extension (on OS X this loads ./Hello/hello.bundle - unsure about Linux, possibly hello.so)
require_relative 'Hello/hello'

# Hello is now a module, so we need to include it
include Hello

# Call and print the result from the hello method
hello()
# => "Hello World"

# In ruby you may call without parentheses too
hello
# => "Hello World"
