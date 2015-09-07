#pragma once
#include "lookinglass/Element_Type.h"
#include <memory>

namespace lookinglass {

  class Element {
  public:
      Element_Type type;
      Element(Element_Type type) {
        this->type = type;
      }
  };

  typedef std::shared_ptr<Element> Element_Pointer;
}