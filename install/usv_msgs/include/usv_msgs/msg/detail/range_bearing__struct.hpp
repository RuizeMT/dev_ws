// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usv_msgs:msg/RangeBearing.idl
// generated code does not contain a copyright notice

#ifndef USV_MSGS__MSG__DETAIL__RANGE_BEARING__STRUCT_HPP_
#define USV_MSGS__MSG__DETAIL__RANGE_BEARING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__usv_msgs__msg__RangeBearing __attribute__((deprecated))
#else
# define DEPRECATED__usv_msgs__msg__RangeBearing __declspec(deprecated)
#endif

namespace usv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RangeBearing_
{
  using Type = RangeBearing_<ContainerAllocator>;

  explicit RangeBearing_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->bearing = 0.0f;
      this->elevation = 0.0f;
    }
  }

  explicit RangeBearing_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->bearing = 0.0f;
      this->elevation = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _range_type =
    float;
  _range_type range;
  using _bearing_type =
    float;
  _bearing_type bearing;
  using _elevation_type =
    float;
  _elevation_type elevation;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__bearing(
    const float & _arg)
  {
    this->bearing = _arg;
    return *this;
  }
  Type & set__elevation(
    const float & _arg)
  {
    this->elevation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usv_msgs::msg::RangeBearing_<ContainerAllocator> *;
  using ConstRawPtr =
    const usv_msgs::msg::RangeBearing_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usv_msgs::msg::RangeBearing_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usv_msgs::msg::RangeBearing_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usv_msgs::msg::RangeBearing_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usv_msgs::msg::RangeBearing_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usv_msgs::msg::RangeBearing_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usv_msgs::msg::RangeBearing_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usv_msgs::msg::RangeBearing_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usv_msgs::msg::RangeBearing_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usv_msgs__msg__RangeBearing
    std::shared_ptr<usv_msgs::msg::RangeBearing_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usv_msgs__msg__RangeBearing
    std::shared_ptr<usv_msgs::msg::RangeBearing_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RangeBearing_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    return true;
  }
  bool operator!=(const RangeBearing_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RangeBearing_

// alias to use template instance with default allocator
using RangeBearing =
  usv_msgs::msg::RangeBearing_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usv_msgs

#endif  // USV_MSGS__MSG__DETAIL__RANGE_BEARING__STRUCT_HPP_
