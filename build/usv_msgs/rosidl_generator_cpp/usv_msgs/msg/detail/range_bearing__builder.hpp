// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usv_msgs:msg/RangeBearing.idl
// generated code does not contain a copyright notice

#ifndef USV_MSGS__MSG__DETAIL__RANGE_BEARING__BUILDER_HPP_
#define USV_MSGS__MSG__DETAIL__RANGE_BEARING__BUILDER_HPP_

#include "usv_msgs/msg/detail/range_bearing__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace usv_msgs
{

namespace msg
{

namespace builder
{

class Init_RangeBearing_elevation
{
public:
  explicit Init_RangeBearing_elevation(::usv_msgs::msg::RangeBearing & msg)
  : msg_(msg)
  {}
  ::usv_msgs::msg::RangeBearing elevation(::usv_msgs::msg::RangeBearing::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usv_msgs::msg::RangeBearing msg_;
};

class Init_RangeBearing_bearing
{
public:
  explicit Init_RangeBearing_bearing(::usv_msgs::msg::RangeBearing & msg)
  : msg_(msg)
  {}
  Init_RangeBearing_elevation bearing(::usv_msgs::msg::RangeBearing::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return Init_RangeBearing_elevation(msg_);
  }

private:
  ::usv_msgs::msg::RangeBearing msg_;
};

class Init_RangeBearing_range
{
public:
  explicit Init_RangeBearing_range(::usv_msgs::msg::RangeBearing & msg)
  : msg_(msg)
  {}
  Init_RangeBearing_bearing range(::usv_msgs::msg::RangeBearing::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_RangeBearing_bearing(msg_);
  }

private:
  ::usv_msgs::msg::RangeBearing msg_;
};

class Init_RangeBearing_header
{
public:
  Init_RangeBearing_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RangeBearing_range header(::usv_msgs::msg::RangeBearing::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RangeBearing_range(msg_);
  }

private:
  ::usv_msgs::msg::RangeBearing msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usv_msgs::msg::RangeBearing>()
{
  return usv_msgs::msg::builder::Init_RangeBearing_header();
}

}  // namespace usv_msgs

#endif  // USV_MSGS__MSG__DETAIL__RANGE_BEARING__BUILDER_HPP_
