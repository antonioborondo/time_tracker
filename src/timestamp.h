#ifndef TIME_TRACKER_TIMESTAMP_H_
#define TIME_TRACKER_TIMESTAMP_H_

#include <ostream>
#include <string>

#include <fmt/ostream.h>

class Timestamp {
 public:
  Timestamp(const std::string& timestamp);

  std::string Get() const;

  std::string GetDate() const;

  std::string GetTime() const;

  static Timestamp GetCurrent();

 private:
  bool IsValid() const;

  std::string timestamp_;
};

bool operator==(const Timestamp& lhs, const Timestamp& rhs);

bool operator!=(const Timestamp& lhs, const Timestamp& rhs);

std::ostream& operator<<(std::ostream& os, const Timestamp& timestamp);

template <>
struct fmt::formatter<Timestamp> : ostream_formatter {};

#endif  // TIME_TRACKER_TIMESTAMP_H_
