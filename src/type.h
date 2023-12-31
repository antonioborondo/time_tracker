#ifndef TIME_TRACKER_TYPE_H_
#define TIME_TRACKER_TYPE_H_

#include <ostream>

#include <fmt/ostream.h>

enum class Type {
  kStop = 0,
  kStart,
};

std::ostream& operator<<(std::ostream& os, const Type& type);

template <>
struct fmt::formatter<Type> : ostream_formatter {};

#endif  // TIME_TRACKER_TYPE_H_
