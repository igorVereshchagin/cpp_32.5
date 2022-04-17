// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: company.proto

#include "company.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR Company::Company(
    ::_pbi::ConstantInitialized)
  : legaladdress_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , occupation_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , foundedyear_(0)
  , foreignactivity_(false){}
struct CompanyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CompanyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CompanyDefaultTypeInternal() {}
  union {
    Company _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CompanyDefaultTypeInternal _Company_default_instance_;
static ::_pb::Metadata file_level_metadata_company_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_company_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_company_2eproto = nullptr;

const uint32_t TableStruct_company_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Company, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Company, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Company, foundedyear_),
  PROTOBUF_FIELD_OFFSET(::Company, legaladdress_),
  PROTOBUF_FIELD_OFFSET(::Company, name_),
  PROTOBUF_FIELD_OFFSET(::Company, occupation_),
  PROTOBUF_FIELD_OFFSET(::Company, foreignactivity_),
  3,
  0,
  1,
  2,
  4,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::Company)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Company_default_instance_._instance,
};

const char descriptor_table_protodef_company_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rcompany.proto\"o\n\007Company\022\023\n\013foundedYea"
  "r\030\001 \002(\005\022\024\n\014legalAddress\030\002 \002(\t\022\014\n\004name\030\003 "
  "\002(\t\022\022\n\noccupation\030\004 \001(\t\022\027\n\017foreignActivi"
  "ty\030\005 \001(\010"
  ;
static ::_pbi::once_flag descriptor_table_company_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_company_2eproto = {
    false, false, 128, descriptor_table_protodef_company_2eproto,
    "company.proto",
    &descriptor_table_company_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_company_2eproto::offsets,
    file_level_metadata_company_2eproto, file_level_enum_descriptors_company_2eproto,
    file_level_service_descriptors_company_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_company_2eproto_getter() {
  return &descriptor_table_company_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_company_2eproto(&descriptor_table_company_2eproto);

// ===================================================================

class Company::_Internal {
 public:
  using HasBits = decltype(std::declval<Company>()._has_bits_);
  static void set_has_foundedyear(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_legaladdress(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_occupation(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_foreignactivity(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000000b) ^ 0x0000000b) != 0;
  }
};

Company::Company(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:Company)
}
Company::Company(const Company& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  legaladdress_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    legaladdress_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_legaladdress()) {
    legaladdress_.Set(from._internal_legaladdress(), 
      GetArenaForAllocation());
  }
  name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    name_.Set(from._internal_name(), 
      GetArenaForAllocation());
  }
  occupation_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    occupation_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_occupation()) {
    occupation_.Set(from._internal_occupation(), 
      GetArenaForAllocation());
  }
  ::memcpy(&foundedyear_, &from.foundedyear_,
    static_cast<size_t>(reinterpret_cast<char*>(&foreignactivity_) -
    reinterpret_cast<char*>(&foundedyear_)) + sizeof(foreignactivity_));
  // @@protoc_insertion_point(copy_constructor:Company)
}

inline void Company::SharedCtor() {
legaladdress_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  legaladdress_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
occupation_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  occupation_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&foundedyear_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&foreignactivity_) -
    reinterpret_cast<char*>(&foundedyear_)) + sizeof(foreignactivity_));
}

Company::~Company() {
  // @@protoc_insertion_point(destructor:Company)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Company::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  legaladdress_.Destroy();
  name_.Destroy();
  occupation_.Destroy();
}

void Company::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Company::Clear() {
// @@protoc_insertion_point(message_clear_start:Company)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      legaladdress_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      occupation_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x00000018u) {
    ::memset(&foundedyear_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&foreignactivity_) -
        reinterpret_cast<char*>(&foundedyear_)) + sizeof(foreignactivity_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Company::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 foundedYear = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_foundedyear(&has_bits);
          foundedyear_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required string legalAddress = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_legaladdress();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "Company.legalAddress");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // required string name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "Company.name");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional string occupation = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_occupation();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "Company.occupation");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional bool foreignActivity = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_foreignactivity(&has_bits);
          foreignactivity_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Company::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Company)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 foundedYear = 1;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_foundedyear(), target);
  }

  // required string legalAddress = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_legaladdress().data(), static_cast<int>(this->_internal_legaladdress().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Company.legalAddress");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_legaladdress(), target);
  }

  // required string name = 3;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Company.name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_name(), target);
  }

  // optional string occupation = 4;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_occupation().data(), static_cast<int>(this->_internal_occupation().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Company.occupation");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_occupation(), target);
  }

  // optional bool foreignActivity = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_foreignactivity(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Company)
  return target;
}

size_t Company::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Company)
  size_t total_size = 0;

  if (_internal_has_legaladdress()) {
    // required string legalAddress = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_legaladdress());
  }

  if (_internal_has_name()) {
    // required string name = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  if (_internal_has_foundedyear()) {
    // required int32 foundedYear = 1;
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_foundedyear());
  }

  return total_size;
}
size_t Company::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Company)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000b) ^ 0x0000000b) == 0) {  // All required fields are present.
    // required string legalAddress = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_legaladdress());

    // required string name = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());

    // required int32 foundedYear = 1;
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_foundedyear());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string occupation = 4;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000004u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_occupation());
  }

  // optional bool foreignActivity = 5;
  if (cached_has_bits & 0x00000010u) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Company::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Company::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Company::GetClassData() const { return &_class_data_; }

void Company::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Company *>(to)->MergeFrom(
      static_cast<const Company &>(from));
}


void Company::MergeFrom(const Company& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Company)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_legaladdress(from._internal_legaladdress());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_occupation(from._internal_occupation());
    }
    if (cached_has_bits & 0x00000008u) {
      foundedyear_ = from.foundedyear_;
    }
    if (cached_has_bits & 0x00000010u) {
      foreignactivity_ = from.foreignactivity_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Company::CopyFrom(const Company& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Company)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Company::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Company::InternalSwap(Company* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &legaladdress_, lhs_arena,
      &other->legaladdress_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &occupation_, lhs_arena,
      &other->occupation_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Company, foreignactivity_)
      + sizeof(Company::foreignactivity_)
      - PROTOBUF_FIELD_OFFSET(Company, foundedyear_)>(
          reinterpret_cast<char*>(&foundedyear_),
          reinterpret_cast<char*>(&other->foundedyear_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Company::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_company_2eproto_getter, &descriptor_table_company_2eproto_once,
      file_level_metadata_company_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Company*
Arena::CreateMaybeMessage< ::Company >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Company >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>