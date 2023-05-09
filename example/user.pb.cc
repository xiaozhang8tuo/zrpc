// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user.proto

#include "user.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_user_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_user_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ResultCode;
}  // namespace protobuf_user_2eproto
namespace zrpc {
class ResultCodeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ResultCode>
      _instance;
} _ResultCode_default_instance_;
class LoginReqDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LoginReq>
      _instance;
} _LoginReq_default_instance_;
class LoginAckDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LoginAck>
      _instance;
} _LoginAck_default_instance_;
}  // namespace zrpc
namespace protobuf_user_2eproto {
static void InitDefaultsResultCode() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::zrpc::_ResultCode_default_instance_;
    new (ptr) ::zrpc::ResultCode();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zrpc::ResultCode::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ResultCode =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsResultCode}, {}};

static void InitDefaultsLoginReq() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::zrpc::_LoginReq_default_instance_;
    new (ptr) ::zrpc::LoginReq();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zrpc::LoginReq::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_LoginReq =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLoginReq}, {}};

static void InitDefaultsLoginAck() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::zrpc::_LoginAck_default_instance_;
    new (ptr) ::zrpc::LoginAck();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zrpc::LoginAck::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_LoginAck =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsLoginAck}, {
      &protobuf_user_2eproto::scc_info_ResultCode.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ResultCode.base);
  ::google::protobuf::internal::InitSCC(&scc_info_LoginReq.base);
  ::google::protobuf::internal::InitSCC(&scc_info_LoginAck.base);
}

::google::protobuf::Metadata file_level_metadata[3];
const ::google::protobuf::ServiceDescriptor* file_level_service_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zrpc::ResultCode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zrpc::ResultCode, result_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zrpc::ResultCode, errmsg_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zrpc::LoginReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zrpc::LoginReq, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zrpc::LoginReq, pwd_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zrpc::LoginAck, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zrpc::LoginAck, result_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zrpc::LoginAck, success_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::zrpc::ResultCode)},
  { 7, -1, sizeof(::zrpc::LoginReq)},
  { 14, -1, sizeof(::zrpc::LoginAck)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::zrpc::_ResultCode_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zrpc::_LoginReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zrpc::_LoginAck_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "user.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, file_level_service_descriptors);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nuser.proto\022\004zrpc\",\n\nResultCode\022\016\n\006resu"
      "lt\030\001 \001(\005\022\016\n\006errmsg\030\002 \001(\014\"%\n\010LoginReq\022\014\n\004"
      "name\030\001 \001(\014\022\013\n\003pwd\030\002 \001(\014\"=\n\010LoginAck\022 \n\006r"
      "esult\030\001 \001(\0132\020.zrpc.ResultCode\022\017\n\007success"
      "\030\002 \001(\01029\n\016UserServiceRpc\022\'\n\005Login\022\016.zrpc"
      ".LoginReq\032\016.zrpc.LoginAckB\003\200\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 238);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "user.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_user_2eproto
namespace zrpc {

// ===================================================================

void ResultCode::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResultCode::kResultFieldNumber;
const int ResultCode::kErrmsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResultCode::ResultCode()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_user_2eproto::scc_info_ResultCode.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:zrpc.ResultCode)
}
ResultCode::ResultCode(const ResultCode& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  errmsg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.errmsg().size() > 0) {
    errmsg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.errmsg_);
  }
  result_ = from.result_;
  // @@protoc_insertion_point(copy_constructor:zrpc.ResultCode)
}

void ResultCode::SharedCtor() {
  errmsg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  result_ = 0;
}

ResultCode::~ResultCode() {
  // @@protoc_insertion_point(destructor:zrpc.ResultCode)
  SharedDtor();
}

void ResultCode::SharedDtor() {
  errmsg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ResultCode::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ResultCode::descriptor() {
  ::protobuf_user_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_user_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ResultCode& ResultCode::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_user_2eproto::scc_info_ResultCode.base);
  return *internal_default_instance();
}


void ResultCode::Clear() {
// @@protoc_insertion_point(message_clear_start:zrpc.ResultCode)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  errmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  result_ = 0;
  _internal_metadata_.Clear();
}

bool ResultCode::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:zrpc.ResultCode)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes errmsg = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_errmsg()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:zrpc.ResultCode)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:zrpc.ResultCode)
  return false;
#undef DO_
}

void ResultCode::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:zrpc.ResultCode)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
  }

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->errmsg(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:zrpc.ResultCode)
}

::google::protobuf::uint8* ResultCode::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:zrpc.ResultCode)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->result(), target);
  }

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->errmsg(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:zrpc.ResultCode)
  return target;
}

size_t ResultCode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:zrpc.ResultCode)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->errmsg());
  }

  // int32 result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->result());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResultCode::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:zrpc.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  const ResultCode* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ResultCode>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:zrpc.ResultCode)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:zrpc.ResultCode)
    MergeFrom(*source);
  }
}

void ResultCode::MergeFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:zrpc.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.errmsg().size() > 0) {

    errmsg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.errmsg_);
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
}

void ResultCode::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:zrpc.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResultCode::CopyFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:zrpc.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResultCode::IsInitialized() const {
  return true;
}

void ResultCode::Swap(ResultCode* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ResultCode::InternalSwap(ResultCode* other) {
  using std::swap;
  errmsg_.Swap(&other->errmsg_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(result_, other->result_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ResultCode::GetMetadata() const {
  protobuf_user_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_user_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void LoginReq::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoginReq::kNameFieldNumber;
const int LoginReq::kPwdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoginReq::LoginReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_user_2eproto::scc_info_LoginReq.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:zrpc.LoginReq)
}
LoginReq::LoginReq(const LoginReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  pwd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.pwd().size() > 0) {
    pwd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pwd_);
  }
  // @@protoc_insertion_point(copy_constructor:zrpc.LoginReq)
}

void LoginReq::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pwd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

LoginReq::~LoginReq() {
  // @@protoc_insertion_point(destructor:zrpc.LoginReq)
  SharedDtor();
}

void LoginReq::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pwd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LoginReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LoginReq::descriptor() {
  ::protobuf_user_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_user_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LoginReq& LoginReq::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_user_2eproto::scc_info_LoginReq.base);
  return *internal_default_instance();
}


void LoginReq::Clear() {
// @@protoc_insertion_point(message_clear_start:zrpc.LoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool LoginReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:zrpc.LoginReq)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes pwd = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_pwd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:zrpc.LoginReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:zrpc.LoginReq)
  return false;
#undef DO_
}

void LoginReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:zrpc.LoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->name(), output);
  }

  // bytes pwd = 2;
  if (this->pwd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->pwd(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:zrpc.LoginReq)
}

::google::protobuf::uint8* LoginReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:zrpc.LoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes name = 1;
  if (this->name().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->name(), target);
  }

  // bytes pwd = 2;
  if (this->pwd().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->pwd(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:zrpc.LoginReq)
  return target;
}

size_t LoginReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:zrpc.LoginReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->name());
  }

  // bytes pwd = 2;
  if (this->pwd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->pwd());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoginReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:zrpc.LoginReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LoginReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LoginReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:zrpc.LoginReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:zrpc.LoginReq)
    MergeFrom(*source);
  }
}

void LoginReq::MergeFrom(const LoginReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:zrpc.LoginReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.pwd().size() > 0) {

    pwd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pwd_);
  }
}

void LoginReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:zrpc.LoginReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginReq::CopyFrom(const LoginReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:zrpc.LoginReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginReq::IsInitialized() const {
  return true;
}

void LoginReq::Swap(LoginReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LoginReq::InternalSwap(LoginReq* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  pwd_.Swap(&other->pwd_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LoginReq::GetMetadata() const {
  protobuf_user_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_user_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void LoginAck::InitAsDefaultInstance() {
  ::zrpc::_LoginAck_default_instance_._instance.get_mutable()->result_ = const_cast< ::zrpc::ResultCode*>(
      ::zrpc::ResultCode::internal_default_instance());
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoginAck::kResultFieldNumber;
const int LoginAck::kSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoginAck::LoginAck()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_user_2eproto::scc_info_LoginAck.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:zrpc.LoginAck)
}
LoginAck::LoginAck(const LoginAck& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_result()) {
    result_ = new ::zrpc::ResultCode(*from.result_);
  } else {
    result_ = NULL;
  }
  success_ = from.success_;
  // @@protoc_insertion_point(copy_constructor:zrpc.LoginAck)
}

void LoginAck::SharedCtor() {
  ::memset(&result_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&success_) -
      reinterpret_cast<char*>(&result_)) + sizeof(success_));
}

LoginAck::~LoginAck() {
  // @@protoc_insertion_point(destructor:zrpc.LoginAck)
  SharedDtor();
}

void LoginAck::SharedDtor() {
  if (this != internal_default_instance()) delete result_;
}

void LoginAck::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LoginAck::descriptor() {
  ::protobuf_user_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_user_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LoginAck& LoginAck::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_user_2eproto::scc_info_LoginAck.base);
  return *internal_default_instance();
}


void LoginAck::Clear() {
// @@protoc_insertion_point(message_clear_start:zrpc.LoginAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && result_ != NULL) {
    delete result_;
  }
  result_ = NULL;
  success_ = false;
  _internal_metadata_.Clear();
}

bool LoginAck::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:zrpc.LoginAck)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .zrpc.ResultCode result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_result()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool success = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:zrpc.LoginAck)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:zrpc.LoginAck)
  return false;
#undef DO_
}

void LoginAck::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:zrpc.LoginAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .zrpc.ResultCode result = 1;
  if (this->has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_result(), output);
  }

  // bool success = 2;
  if (this->success() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->success(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:zrpc.LoginAck)
}

::google::protobuf::uint8* LoginAck::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:zrpc.LoginAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .zrpc.ResultCode result = 1;
  if (this->has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_result(), deterministic, target);
  }

  // bool success = 2;
  if (this->success() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->success(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:zrpc.LoginAck)
  return target;
}

size_t LoginAck::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:zrpc.LoginAck)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .zrpc.ResultCode result = 1;
  if (this->has_result()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *result_);
  }

  // bool success = 2;
  if (this->success() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoginAck::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:zrpc.LoginAck)
  GOOGLE_DCHECK_NE(&from, this);
  const LoginAck* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LoginAck>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:zrpc.LoginAck)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:zrpc.LoginAck)
    MergeFrom(*source);
  }
}

void LoginAck::MergeFrom(const LoginAck& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:zrpc.LoginAck)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_result()) {
    mutable_result()->::zrpc::ResultCode::MergeFrom(from.result());
  }
  if (from.success() != 0) {
    set_success(from.success());
  }
}

void LoginAck::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:zrpc.LoginAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginAck::CopyFrom(const LoginAck& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:zrpc.LoginAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginAck::IsInitialized() const {
  return true;
}

void LoginAck::Swap(LoginAck* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LoginAck::InternalSwap(LoginAck* other) {
  using std::swap;
  swap(result_, other->result_);
  swap(success_, other->success_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LoginAck::GetMetadata() const {
  protobuf_user_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_user_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

UserServiceRpc::~UserServiceRpc() {}

const ::google::protobuf::ServiceDescriptor* UserServiceRpc::descriptor() {
  protobuf_user_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_user_2eproto::file_level_service_descriptors[0];
}

const ::google::protobuf::ServiceDescriptor* UserServiceRpc::GetDescriptor() {
  return descriptor();
}

void UserServiceRpc::Login(::google::protobuf::RpcController* controller,
                         const ::zrpc::LoginReq*,
                         ::zrpc::LoginAck*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Login() not implemented.");
  done->Run();
}

void UserServiceRpc::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), protobuf_user_2eproto::file_level_service_descriptors[0]);
  switch(method->index()) {
    case 0:
      Login(controller,
             ::google::protobuf::down_cast<const ::zrpc::LoginReq*>(request),
             ::google::protobuf::down_cast< ::zrpc::LoginAck*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& UserServiceRpc::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::zrpc::LoginReq::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::google::protobuf::Message& UserServiceRpc::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::zrpc::LoginAck::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

UserServiceRpc_Stub::UserServiceRpc_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
UserServiceRpc_Stub::UserServiceRpc_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
UserServiceRpc_Stub::~UserServiceRpc_Stub() {
  if (owns_channel_) delete channel_;
}

void UserServiceRpc_Stub::Login(::google::protobuf::RpcController* controller,
                              const ::zrpc::LoginReq* request,
                              ::zrpc::LoginAck* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace zrpc
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::zrpc::ResultCode* Arena::CreateMaybeMessage< ::zrpc::ResultCode >(Arena* arena) {
  return Arena::CreateInternal< ::zrpc::ResultCode >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::zrpc::LoginReq* Arena::CreateMaybeMessage< ::zrpc::LoginReq >(Arena* arena) {
  return Arena::CreateInternal< ::zrpc::LoginReq >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::zrpc::LoginAck* Arena::CreateMaybeMessage< ::zrpc::LoginAck >(Arena* arena) {
  return Arena::CreateInternal< ::zrpc::LoginAck >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)