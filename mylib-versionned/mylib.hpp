#pragma once

#include <iosfwd>
#include <string>

#include <mylib-versionned/export.hpp>

namespace mylib
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  MYLIB_VERSIONNED_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);

  MYLIB_VERSIONNED_SYMEXPORT void
  say_kikoo (std::ostream&, const std::string& name);
}
