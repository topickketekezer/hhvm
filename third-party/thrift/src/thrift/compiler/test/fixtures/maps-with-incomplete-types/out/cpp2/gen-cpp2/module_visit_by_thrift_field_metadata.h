/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/maps-with-incomplete-types/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/maps-with-incomplete-types/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::apache::thrift::test::A> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).some_map_ref());
    default:
      throwInvalidThriftId(fieldId, "::apache::thrift::test::A");
    }
  }
};

template <>
struct VisitByFieldId<::apache::thrift::test::B> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    default:
      throwInvalidThriftId(fieldId, "::apache::thrift::test::B");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache