/**
 * Autogenerated by Thrift for src/reflection.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct fieldA;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_fieldA
#define APACHE_THRIFT_ACCESSOR_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(fieldA);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class ReflectionStruct;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
} // cpp2
namespace cpp2 {
class ReflectionStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();

 public:
  using __fbthrift_cpp2_type = ReflectionStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  ReflectionStruct() :
      __fbthrift_field_fieldA(static_cast<::std::int32_t>(5)) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  ReflectionStruct(apache::thrift::FragileConstructor, ::std::int32_t fieldA__arg);

  ReflectionStruct(ReflectionStruct&&) = default;

  ReflectionStruct(const ReflectionStruct&) = default;


  ReflectionStruct& operator=(ReflectionStruct&&) = default;

  ReflectionStruct& operator=(const ReflectionStruct&) = default;
 private:
  ::std::int32_t __fbthrift_field_fieldA;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const ReflectionStruct&) const;
  bool operator<(const ReflectionStruct&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldA_ref() const& {
    return {this->__fbthrift_field_fieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldA_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_fieldA), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldA_ref() & {
    return {this->__fbthrift_field_fieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldA_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_fieldA), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldA() const& {
    return {this->__fbthrift_field_fieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldA() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_fieldA), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldA() & {
    return {this->__fbthrift_field_fieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldA() && {
    return {static_cast<T&&>(this->__fbthrift_field_fieldA), __isset.at(0), __isset.bit(0)};
  }

  ::std::int32_t get_fieldA() const {
    return __fbthrift_field_fieldA;
  }

  [[deprecated("Use `FOO.fieldA_ref() = BAR;` instead of `FOO.set_fieldA(BAR);`")]]
  ::std::int32_t& set_fieldA(::std::int32_t fieldA_) {
    fieldA_ref() = fieldA_;
    return __fbthrift_field_fieldA;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<ReflectionStruct>;
  friend void swap(ReflectionStruct& a, ReflectionStruct& b);
};

template <class Protocol_>
uint32_t ReflectionStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
