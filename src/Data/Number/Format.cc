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
    int offset{1}; if (str.find_last_not_of('0') == str.find('.')) { offset = 0; }
    str.erase(str.find_last_not_of('0') + offset, std::string::npos);
    return str;
  }
}

