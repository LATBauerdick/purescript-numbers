#ifndef Data_Number_Format_FFI_HH
#define Data_Number_Format_FFI_HH

#include "PureScript/PureScript.hh"

namespace Data_Show {
  using namespace PureScript;

  // foreign import toString :: Number -> String
  //
  inline auto toString(const any& x) -> any {
    return std::to_string((double)x);
  }

  //>>>>>>>>>>>>>>>??????????????????????????<<<<<<<<<<<<<<<<<<<<
  //fix this
  // foreign import toPrecisionNative ∷   Int → Number → String
  inline auto toPrecisionNative(const any& i, const any& x) -> any {
    return std::to_string((double)x);
  }
  // foreign import toFixedNative ∷       Int → Number → String
  inline auto toFixedNative(const any& i, const any& x) -> any {
    return std::to_string((double)x);
  }
  // foreign import toExponentialNative ∷ Int → Number → String
  inline auto toExponentialNative(const any& i, const any& x) -> any {
    return std::to_string((double)x);
  }
  // foreign import showArrayImpl :: forall a. (a -> String) -> Array a -> String
  //
  // auto showArrayImpl(const any& f, const any::array& xs) -> any;
}

#endif // Data_Number_Format_FFI_HH
