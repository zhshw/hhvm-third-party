/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/lib/thrift/gen-cpp2/frozen_types.h"

#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/ProtocolReaderStructReadState.h>

namespace apache { namespace thrift { namespace frozen { namespace schema {

template <class Protocol_>
void Field::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_layoutId:
  {
    iprot->readI16(this->layoutId);
    this->__isset.layoutId = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_offset:
  {
    iprot->readI16(this->offset);
    this->__isset.offset = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I16)) {
        goto _readField_layoutId;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I16)) {
        goto _readField_offset;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Field::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Field");
  xfer += prot_->serializedFieldSize("layoutId", apache::thrift::protocol::T_I16, 1);
  xfer += prot_->serializedSizeI16(this->layoutId);
  xfer += prot_->serializedFieldSize("offset", apache::thrift::protocol::T_I16, 2);
  xfer += prot_->serializedSizeI16(this->offset);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Field::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Field");
  xfer += prot_->serializedFieldSize("layoutId", apache::thrift::protocol::T_I16, 1);
  xfer += prot_->serializedSizeI16(this->layoutId);
  xfer += prot_->serializedFieldSize("offset", apache::thrift::protocol::T_I16, 2);
  xfer += prot_->serializedSizeI16(this->offset);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Field::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Field");
  xfer += prot_->writeFieldBegin("layoutId", apache::thrift::protocol::T_I16, 1);
  xfer += prot_->writeI16(this->layoutId);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("offset", apache::thrift::protocol::T_I16, 2);
  xfer += prot_->writeI16(this->offset);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}}} // apache::thrift::frozen::schema
namespace apache { namespace thrift { namespace frozen { namespace schema {

template <class Protocol_>
void Layout::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_size:
  {
    iprot->readI32(this->size);
    this->__isset.size = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_bits:
  {
    iprot->readI16(this->bits);
    this->__isset.bits = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_fields:
  {
    this->fields = std::map<int16_t,  ::apache::thrift::frozen::schema::Field>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>::read(*iprot, this->fields);
    this->__isset.fields = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_typeName:
  {
    iprot->readString(this->typeName);
    this->__isset.typeName = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_size;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I16)) {
        goto _readField_bits;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_MAP)) {
        goto _readField_fields;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_typeName;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Layout::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Layout");
  xfer += prot_->serializedFieldSize("size", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->size);
  xfer += prot_->serializedFieldSize("bits", apache::thrift::protocol::T_I16, 2);
  xfer += prot_->serializedSizeI16(this->bits);
  xfer += prot_->serializedFieldSize("fields", apache::thrift::protocol::T_MAP, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>::serializedSize<false>(*prot_, this->fields);
  xfer += prot_->serializedFieldSize("typeName", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->serializedSizeString(this->typeName);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Layout::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Layout");
  xfer += prot_->serializedFieldSize("size", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->size);
  xfer += prot_->serializedFieldSize("bits", apache::thrift::protocol::T_I16, 2);
  xfer += prot_->serializedSizeI16(this->bits);
  xfer += prot_->serializedFieldSize("fields", apache::thrift::protocol::T_MAP, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>::serializedSize<false>(*prot_, this->fields);
  xfer += prot_->serializedFieldSize("typeName", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->serializedSizeString(this->typeName);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Layout::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Layout");
  xfer += prot_->writeFieldBegin("size", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->size);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("bits", apache::thrift::protocol::T_I16, 2);
  xfer += prot_->writeI16(this->bits);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fields", apache::thrift::protocol::T_MAP, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>::write(*prot_, this->fields);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("typeName", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->writeString(this->typeName);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}}} // apache::thrift::frozen::schema
namespace apache { namespace thrift { namespace frozen { namespace schema {

template <class Protocol_>
void Schema::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          4,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_fileVersion:
  {
    iprot->readI32(this->fileVersion);
    this->__isset.fileVersion = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          1,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_relaxTypeChecks:
  {
    iprot->readBool(this->relaxTypeChecks);
    this->__isset.relaxTypeChecks = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_layouts:
  {
    this->layouts = std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>::read(*iprot, this->layouts);
    this->__isset.layouts = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_rootLayout:
  {
    iprot->readI16(this->rootLayout);
    this->__isset.rootLayout = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 4:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_fileVersion;
      } else {
        goto _skip;
      }
    }
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_BOOL)) {
        goto _readField_relaxTypeChecks;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_MAP)) {
        goto _readField_layouts;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I16)) {
        goto _readField_rootLayout;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Schema::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Schema");
  xfer += prot_->serializedFieldSize("fileVersion", apache::thrift::protocol::T_I32, 4);
  xfer += prot_->serializedSizeI32(this->fileVersion);
  xfer += prot_->serializedFieldSize("relaxTypeChecks", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->relaxTypeChecks);
  xfer += prot_->serializedFieldSize("layouts", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>::serializedSize<false>(*prot_, this->layouts);
  xfer += prot_->serializedFieldSize("rootLayout", apache::thrift::protocol::T_I16, 3);
  xfer += prot_->serializedSizeI16(this->rootLayout);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Schema::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Schema");
  xfer += prot_->serializedFieldSize("fileVersion", apache::thrift::protocol::T_I32, 4);
  xfer += prot_->serializedSizeI32(this->fileVersion);
  xfer += prot_->serializedFieldSize("relaxTypeChecks", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->relaxTypeChecks);
  xfer += prot_->serializedFieldSize("layouts", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>::serializedSize<false>(*prot_, this->layouts);
  xfer += prot_->serializedFieldSize("rootLayout", apache::thrift::protocol::T_I16, 3);
  xfer += prot_->serializedSizeI16(this->rootLayout);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Schema::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Schema");
  xfer += prot_->writeFieldBegin("fileVersion", apache::thrift::protocol::T_I32, 4);
  xfer += prot_->writeI32(this->fileVersion);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("relaxTypeChecks", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->writeBool(this->relaxTypeChecks);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("layouts", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>::write(*prot_, this->layouts);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("rootLayout", apache::thrift::protocol::T_I16, 3);
  xfer += prot_->writeI16(this->rootLayout);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}}} // apache::thrift::frozen::schema
