#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder


import apache.thrift.type.standard.types as _apache_thrift_type_standard_types


class TypeUri_Builder(thrift.py3.builder.StructBuilder):
    uri: _typing.Optional[str]
    typeHashPrefixSha2_256: _typing.Optional[bytes]
    scopedName: _typing.Optional[str]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class TypeName_Builder(thrift.py3.builder.StructBuilder):
    boolType: _typing.Optional[_apache_thrift_type_standard_types.Void]
    byteType: _typing.Optional[_apache_thrift_type_standard_types.Void]
    i16Type: _typing.Optional[_apache_thrift_type_standard_types.Void]
    i32Type: _typing.Optional[_apache_thrift_type_standard_types.Void]
    i64Type: _typing.Optional[_apache_thrift_type_standard_types.Void]
    floatType: _typing.Optional[_apache_thrift_type_standard_types.Void]
    doubleType: _typing.Optional[_apache_thrift_type_standard_types.Void]
    stringType: _typing.Optional[_apache_thrift_type_standard_types.Void]
    binaryType: _typing.Optional[_apache_thrift_type_standard_types.Void]
    enumType: _typing.Any
    typedefType: _typing.Any
    structType: _typing.Any
    unionType: _typing.Any
    exceptionType: _typing.Any
    listType: _typing.Optional[_apache_thrift_type_standard_types.Void]
    setType: _typing.Optional[_apache_thrift_type_standard_types.Void]
    mapType: _typing.Optional[_apache_thrift_type_standard_types.Void]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...

