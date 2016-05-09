// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CommonMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* UserInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserInfo_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* UserStatus_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_CommonMessage_2eproto() {
  protobuf_AddDesc_CommonMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CommonMessage.proto");
  GOOGLE_CHECK(file != NULL);
  UserInfo_descriptor_ = file->message_type(0);
  static const int UserInfo_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, acctid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, status_),
  };
  UserInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserInfo_descriptor_,
      UserInfo::default_instance_,
      UserInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserInfo));
  UserStatus_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CommonMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserInfo_descriptor_, &UserInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CommonMessage_2eproto() {
  delete UserInfo::default_instance_;
  delete UserInfo_reflection_;
}

void protobuf_AddDesc_CommonMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023CommonMessage.proto\"E\n\010UserInfo\022\016\n\006acc"
    "tID\030\001 \002(\003\022\014\n\004name\030\002 \002(\t\022\033\n\006status\030\003 \002(\0162"
    "\013.UserStatus*%\n\nUserStatus\022\013\n\007OFFLINE\020\000\022"
    "\n\n\006ONLINE\020\001", 131);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CommonMessage.proto", &protobuf_RegisterTypes);
  UserInfo::default_instance_ = new UserInfo();
  UserInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CommonMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CommonMessage_2eproto {
  StaticDescriptorInitializer_CommonMessage_2eproto() {
    protobuf_AddDesc_CommonMessage_2eproto();
  }
} static_descriptor_initializer_CommonMessage_2eproto_;
const ::google::protobuf::EnumDescriptor* UserStatus_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserStatus_descriptor_;
}
bool UserStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int UserInfo::kAcctIDFieldNumber;
const int UserInfo::kNameFieldNumber;
const int UserInfo::kStatusFieldNumber;
#endif  // !_MSC_VER

UserInfo::UserInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserInfo::InitAsDefaultInstance() {
}

UserInfo::UserInfo(const UserInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserInfo::SharedCtor() {
  _cached_size_ = 0;
  acctid_ = GOOGLE_LONGLONG(0);
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserInfo::~UserInfo() {
  SharedDtor();
}

void UserInfo::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void UserInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserInfo_descriptor_;
}

const UserInfo& UserInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CommonMessage_2eproto();
  return *default_instance_;
}

UserInfo* UserInfo::default_instance_ = NULL;

UserInfo* UserInfo::New() const {
  return new UserInfo;
}

void UserInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    acctid_ = GOOGLE_LONGLONG(0);
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    status_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 acctID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &acctid_)));
          set_has_acctid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // required string name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_status;
        break;
      }

      // required .UserStatus status = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_status:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::UserStatus_IsValid(value)) {
            set_status(static_cast< ::UserStatus >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void UserInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int64 acctID = 1;
  if (has_acctid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->acctid(), output);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // required .UserStatus status = 3;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->status(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int64 acctID = 1;
  if (has_acctid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->acctid(), target);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // required .UserStatus status = 3;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->status(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 acctID = 1;
    if (has_acctid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->acctid());
    }

    // required string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required .UserStatus status = 3;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserInfo::MergeFrom(const UserInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_acctid()) {
      set_acctid(from.acctid());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserInfo::CopyFrom(const UserInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void UserInfo::Swap(UserInfo* other) {
  if (other != this) {
    std::swap(acctid_, other->acctid_);
    std::swap(name_, other->name_);
    std::swap(status_, other->status_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserInfo_descriptor_;
  metadata.reflection = UserInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
