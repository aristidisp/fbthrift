/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "folly/sorted_vector_types.h"

namespace apache {
namespace thrift {
namespace ident {
struct FieldA;
struct FieldA;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_FieldA
#define APACHE_THRIFT_ACCESSOR_FieldA
APACHE_THRIFT_DEFINE_ACCESSOR(FieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_FieldA
#define APACHE_THRIFT_ACCESSOR_FieldA
APACHE_THRIFT_DEFINE_ACCESSOR(FieldA);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace a { namespace different { namespace ns {

enum class AnEnum {
  FIELDA = 2,
  FIELDB = 4,
};



}}} // a::different::ns

namespace std {
template<> struct hash<::a::different::ns::AnEnum> :
  ::apache::thrift::detail::enum_hash<::a::different::ns::AnEnum> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::a::different::ns::AnEnum>;

template <> struct TEnumTraits<::a::different::ns::AnEnum> {
  using type = ::a::different::ns::AnEnum;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static bool findName(type value, folly::StringPiece* out) noexcept;
  static bool findValue(folly::StringPiece name, type* out) noexcept;

#if FOLLY_HAS_STRING_VIEW
  static bool findName(type value, std::string_view* out) noexcept {
    folly::StringPiece outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
#endif
  static char const* findName(type value) noexcept {
    folly::StringPiece ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::FIELDA; }
  static constexpr type max() { return type::FIELDB; }
};


}} // apache::thrift


// END declare_enums
// BEGIN forward_declare
namespace a { namespace different { namespace ns {
class AStruct;
class AStructB;
}}} // a::different::ns
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace a { namespace different { namespace ns {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;

typedef ::std::int64_t IncludedInt64;

class AStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static const folly::StringPiece __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::FieldA
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::i32_t
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 1;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = AStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  AStruct() :
      __fbthrift_field_FieldA() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  AStruct(apache::thrift::FragileConstructor, ::std::int32_t FieldA__arg);

  AStruct(AStruct&&) = default;

  AStruct(const AStruct&) = default;


  AStruct& operator=(AStruct&&) = default;

  AStruct& operator=(const AStruct&) = default;
 private:
  ::std::int32_t __fbthrift_field_FieldA;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const AStruct&) const;
  bool operator<(const AStruct&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> FieldA_ref() const& {
    return {this->__fbthrift_field_FieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> FieldA_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_FieldA), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> FieldA_ref() & {
    return {this->__fbthrift_field_FieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> FieldA_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_FieldA), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> FieldA() const& {
    return {this->__fbthrift_field_FieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> FieldA() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_FieldA), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> FieldA() & {
    return {this->__fbthrift_field_FieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> FieldA() && {
    return {static_cast<T&&>(this->__fbthrift_field_FieldA), __isset.at(0), __isset.bit(0)};
  }

  ::std::int32_t get_FieldA() const {
    return __fbthrift_field_FieldA;
  }

  [[deprecated("Use `FOO.FieldA_ref() = BAR;` instead of `FOO.set_FieldA(BAR);`")]]
  ::std::int32_t& set_FieldA(::std::int32_t FieldA_) {
    FieldA_ref() = FieldA_;
    return __fbthrift_field_FieldA;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<AStruct>;
  friend void swap(AStruct& a, AStruct& b);
};

template <class Protocol_>
unsigned long AStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


class AStructB final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static const folly::StringPiece __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::FieldA
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::struct_t<::a::different::ns::AStruct>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 1;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = AStructB;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  AStructB();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  AStructB(apache::thrift::FragileConstructor, ::std::shared_ptr<const ::a::different::ns::AStruct> FieldA__arg);

  AStructB(AStructB&&) noexcept;

  AStructB(const AStructB& src);


  AStructB& operator=(AStructB&&) noexcept;
  AStructB& operator=(const AStructB& src);

  ~AStructB();

 private:
  ::std::shared_ptr<const ::a::different::ns::AStruct> __fbthrift_field_FieldA;

 public:

  bool operator==(const AStructB&) const;
  bool operator<(const AStructB&) const;
  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE T& FieldA_ref() & {
    return __fbthrift_field_FieldA;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE const T& FieldA_ref() const& {
    return __fbthrift_field_FieldA;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE T&& FieldA_ref() && {
    return static_cast<T&&>(__fbthrift_field_FieldA);
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE const T&& FieldA_ref() const&& {
    return static_cast<const T&&>(__fbthrift_field_FieldA);
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE T& FieldA() & {
    return __fbthrift_field_FieldA;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE const T& FieldA() const& {
    return __fbthrift_field_FieldA;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE T&& FieldA() && {
    return static_cast<T&&>(__fbthrift_field_FieldA);
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE const T&& FieldA() const&& {
    return static_cast<const T&&>(__fbthrift_field_FieldA);
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<AStructB>;
  friend void swap(AStructB& a, AStructB& b);
};

template <class Protocol_>
unsigned long AStructB::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


}}} // a::different::ns
