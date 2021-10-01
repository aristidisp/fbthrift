/**
 * Autogenerated by Thrift for src/matching_module_name.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/matching_module_name_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/matching_module_name_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/matching_module_name_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::matching_module_name::MyStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::matching_module_name::MyStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace matching_module_name {


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct(apache::thrift::FragileConstructor, ::matching_module_name::OtherStruct OtherStructField__arg) :
    OtherStructField(std::move(OtherStructField__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void MyStruct::__clear() {
  // clear all fields
  this->OtherStructField.__clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.OtherStructField_ref() == rhs.OtherStructField_ref())) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.OtherStructField_ref() == rhs.OtherStructField_ref())) {
    return lhs.OtherStructField_ref() < rhs.OtherStructField_ref();
  }
  return false;
}

const ::matching_module_name::OtherStruct& MyStruct::get_OtherStructField() const& {
  return OtherStructField;
}

::matching_module_name::OtherStruct MyStruct::get_OtherStructField() && {
  return std::move(OtherStructField);
}


void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.OtherStructField_ref().value(), b.OtherStructField_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::matching_module_name::OtherStruct>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::matching_module_name::OtherStruct>,
    "inconsistent use of nimble option");

} // matching_module_name

namespace matching_module_name { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // matching_module_name
