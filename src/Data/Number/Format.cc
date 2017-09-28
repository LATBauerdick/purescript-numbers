///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Format.cc
// Copyright   :  (c) LATBauerdick 2017
// License     :  MIT
//
// Maintainer  :  
// Stability   :  experimental
// Portability :
//
// Number_Format FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#include "Format.hh"
#include <string>

namespace Data_Number_Format {
  using namespace PureScript;
  auto toString(const any& f) -> any {
    std::string str = std::to_string ((double)f);
    int offset{1};
    int ln0 = str.find_last_not_of('0');
    if (ln0 == str.find('.')) {
      str.erase(ln0+2, std::string::npos);
    } else
      str.erase(ln0 + offset, std::string::npos);
    return str;
  }
}

