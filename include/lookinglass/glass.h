#pragma once

#include "lookinglass/Element.h"

namespace lookinglass {

  class Glass {
  public:
      virtual void start() = 0;
      virtual void stop() = 0;
      virtual int update() = 0;
      virtual void add_element(const Element_Pointer &element) = 0;
      virtual void delete_element(const Element_Pointer &element) = 0;
  };
}
