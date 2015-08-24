#pragma once

namespace lookinglass {

  class Glass {
  public:
      virtual void start() = 0;
      virtual void stop() = 0;
  };
}
