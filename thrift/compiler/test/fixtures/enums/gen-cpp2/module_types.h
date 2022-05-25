/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

#include <thrift/lib/cpp2/type/Tag.h>


namespace apache {
namespace thrift {
namespace tag {
struct reasonable;
struct fine;
struct questionable;
struct tags;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_reasonable
#define APACHE_THRIFT_ACCESSOR_reasonable
APACHE_THRIFT_DEFINE_ACCESSOR(reasonable);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fine
#define APACHE_THRIFT_ACCESSOR_fine
APACHE_THRIFT_DEFINE_ACCESSOR(fine);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_questionable
#define APACHE_THRIFT_ACCESSOR_questionable
APACHE_THRIFT_DEFINE_ACCESSOR(questionable);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_tags
#define APACHE_THRIFT_ACCESSOR_tags
APACHE_THRIFT_DEFINE_ACCESSOR(tags);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class Metasyntactic {
  FOO = 1,
  BAR = 2,
  BAZ = 3,
  BAX = 4,
};




} // cpp2

namespace std {
template<> struct hash<::cpp2::Metasyntactic> :
  ::apache::thrift::detail::enum_hash<::cpp2::Metasyntactic> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::Metasyntactic>;

template <> struct TEnumTraits<::cpp2::Metasyntactic> {
  using type = ::cpp2::Metasyntactic;

  static constexpr std::size_t const size = 4;
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
  static constexpr type min() { return type::FOO; }
  static constexpr type max() { return type::BAX; }
};


}} // apache::thrift

namespace cpp2 {

using _Metasyntactic_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Metasyntactic>;
#ifndef ANDROID
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _Metasyntactic_EnumMapFactory::ValuesToNamesMapType _Metasyntactic_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _Metasyntactic_EnumMapFactory::NamesToValuesMapType _Metasyntactic_NAMES_TO_VALUES;
#endif
} // cpp2

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class SomeStruct;
} // cpp2
// END forward_declare
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class SomeStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = SomeStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  SomeStruct() :
      __fbthrift_field_reasonable( ::cpp2::Metasyntactic::FOO),
      __fbthrift_field_fine( ::cpp2::Metasyntactic::BAR),
      __fbthrift_field_questionable(static_cast< ::cpp2::Metasyntactic>(-1)) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SomeStruct(apache::thrift::FragileConstructor, ::cpp2::Metasyntactic reasonable__arg, ::cpp2::Metasyntactic fine__arg, ::cpp2::Metasyntactic questionable__arg, ::std::set<::std::int32_t> tags__arg);

  SomeStruct(SomeStruct&&) noexcept;

  SomeStruct(const SomeStruct& src);


  SomeStruct& operator=(SomeStruct&&) noexcept;
  SomeStruct& operator=(const SomeStruct& src);
 private:
  ::cpp2::Metasyntactic __fbthrift_field_reasonable;
 private:
  ::cpp2::Metasyntactic __fbthrift_field_fine;
 private:
  ::cpp2::Metasyntactic __fbthrift_field_questionable;
 private:
  ::std::set<::std::int32_t> __fbthrift_field_tags;
 private:
  apache::thrift::detail::isset_bitset<4, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const SomeStruct&) const;
  bool operator<(const SomeStruct&) const;

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> reasonable_ref() const& {
    return {this->__fbthrift_field_reasonable, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> reasonable_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_reasonable), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> reasonable_ref() & {
    return {this->__fbthrift_field_reasonable, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> reasonable_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_reasonable), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> reasonable() const& {
    return {this->__fbthrift_field_reasonable, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> reasonable() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_reasonable), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> reasonable() & {
    return {this->__fbthrift_field_reasonable, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> reasonable() && {
    return {static_cast<T&&>(this->__fbthrift_field_reasonable), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fine_ref() const& {
    return {this->__fbthrift_field_fine, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fine_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_fine), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fine_ref() & {
    return {this->__fbthrift_field_fine, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fine_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_fine), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fine() const& {
    return {this->__fbthrift_field_fine, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fine() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_fine), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fine() & {
    return {this->__fbthrift_field_fine, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fine() && {
    return {static_cast<T&&>(this->__fbthrift_field_fine), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> questionable_ref() const& {
    return {this->__fbthrift_field_questionable, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> questionable_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_questionable), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> questionable_ref() & {
    return {this->__fbthrift_field_questionable, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> questionable_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_questionable), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> questionable() const& {
    return {this->__fbthrift_field_questionable, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> questionable() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_questionable), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> questionable() & {
    return {this->__fbthrift_field_questionable, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> questionable() && {
    return {static_cast<T&&>(this->__fbthrift_field_questionable), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> tags_ref() const& {
    return {this->__fbthrift_field_tags, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> tags_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_tags), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> tags_ref() & {
    return {this->__fbthrift_field_tags, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> tags_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_tags), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> tags() const& {
    return {this->__fbthrift_field_tags, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> tags() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_tags), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> tags() & {
    return {this->__fbthrift_field_tags, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> tags() && {
    return {static_cast<T&&>(this->__fbthrift_field_tags), __isset.at(3), __isset.bit(3)};
  }

  ::cpp2::Metasyntactic get_reasonable() const {
    return __fbthrift_field_reasonable;
  }

  [[deprecated("Use `FOO.reasonable_ref() = BAR;` instead of `FOO.set_reasonable(BAR);`")]]
  ::cpp2::Metasyntactic& set_reasonable(::cpp2::Metasyntactic reasonable_) {
    reasonable_ref() = reasonable_;
    return __fbthrift_field_reasonable;
  }

  ::cpp2::Metasyntactic get_fine() const {
    return __fbthrift_field_fine;
  }

  [[deprecated("Use `FOO.fine_ref() = BAR;` instead of `FOO.set_fine(BAR);`")]]
  ::cpp2::Metasyntactic& set_fine(::cpp2::Metasyntactic fine_) {
    fine_ref() = fine_;
    return __fbthrift_field_fine;
  }

  ::cpp2::Metasyntactic get_questionable() const {
    return __fbthrift_field_questionable;
  }

  [[deprecated("Use `FOO.questionable_ref() = BAR;` instead of `FOO.set_questionable(BAR);`")]]
  ::cpp2::Metasyntactic& set_questionable(::cpp2::Metasyntactic questionable_) {
    questionable_ref() = questionable_;
    return __fbthrift_field_questionable;
  }
  const ::std::set<::std::int32_t>& get_tags() const&;
  ::std::set<::std::int32_t> get_tags() &&;

  template <typename T_SomeStruct_tags_struct_setter = ::std::set<::std::int32_t>>
  [[deprecated("Use `FOO.tags_ref() = BAR;` instead of `FOO.set_tags(BAR);`")]]
  ::std::set<::std::int32_t>& set_tags(T_SomeStruct_tags_struct_setter&& tags_) {
    tags_ref() = std::forward<T_SomeStruct_tags_struct_setter>(tags_);
    return __fbthrift_field_tags;
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

  friend class ::apache::thrift::Cpp2Ops<SomeStruct>;
  friend void swap(SomeStruct& a, SomeStruct& b);
};

template <class Protocol_>
unsigned long SomeStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // cpp2
