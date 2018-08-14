#include <mylib-versionned/mylib.hpp>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace mylib
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }

  void say_kikoo (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Kikoo and lolilol, " << n << '!' << endl;
  }
}
