/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: gzip.proto */

#ifndef PROTOBUF_C_gzip_2eproto__INCLUDED
#define PROTOBUF_C_gzip_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Compress Compress;
typedef struct _Uncompress Uncompress;
typedef struct _Return Return;
typedef struct _Request Request;


/* --- enums --- */

typedef enum _Request__Type {
  REQUEST__TYPE__COMPRESS = 1,
  REQUEST__TYPE__UNCOMPRESS = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(REQUEST__TYPE)
} Request__Type;

/* --- messages --- */

struct  _Compress
{
  ProtobufCMessage base;
  uint32_t fd_in;
  uint32_t fd_out;
  char *original_name;
  protobuf_c_boolean has_mtime;
  uint32_t mtime;
};
#define COMPRESS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&compress__descriptor) \
    , 0, 0, NULL, 0,0 }


struct  _Uncompress
{
  ProtobufCMessage base;
  uint32_t fd_in;
  uint32_t fd_out;
  char *filename;
  char *pre;
  protobuf_c_boolean has_prelen;
  uint32_t prelen;
};
#define UNCOMPRESS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uncompress__descriptor) \
    , 0, 0, NULL, NULL, 0,0 }


struct  _Return
{
  ProtobufCMessage base;
  uint32_t size;
  uint32_t bytes;
};
#define RETURN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&return__descriptor) \
    , 0, 0 }


struct  _Request
{
  ProtobufCMessage base;
  Request__Type type;
  Compress *compress;
  Uncompress *uncompress;
};
#define REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&request__descriptor) \
    , 0, NULL, NULL }


/* Compress methods */
void   compress__init
                     (Compress         *message);
size_t compress__get_packed_size
                     (const Compress   *message);
size_t compress__pack
                     (const Compress   *message,
                      uint8_t             *out);
size_t compress__pack_to_buffer
                     (const Compress   *message,
                      ProtobufCBuffer     *buffer);
Compress *
       compress__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   compress__free_unpacked
                     (Compress *message,
                      ProtobufCAllocator *allocator);
/* Uncompress methods */
void   uncompress__init
                     (Uncompress         *message);
size_t uncompress__get_packed_size
                     (const Uncompress   *message);
size_t uncompress__pack
                     (const Uncompress   *message,
                      uint8_t             *out);
size_t uncompress__pack_to_buffer
                     (const Uncompress   *message,
                      ProtobufCBuffer     *buffer);
Uncompress *
       uncompress__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uncompress__free_unpacked
                     (Uncompress *message,
                      ProtobufCAllocator *allocator);
/* Return methods */
void   return__init
                     (Return         *message);
size_t return__get_packed_size
                     (const Return   *message);
size_t return__pack
                     (const Return   *message,
                      uint8_t             *out);
size_t return__pack_to_buffer
                     (const Return   *message,
                      ProtobufCBuffer     *buffer);
Return *
       return__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   return__free_unpacked
                     (Return *message,
                      ProtobufCAllocator *allocator);
/* Request methods */
void   request__init
                     (Request         *message);
size_t request__get_packed_size
                     (const Request   *message);
size_t request__pack
                     (const Request   *message,
                      uint8_t             *out);
size_t request__pack_to_buffer
                     (const Request   *message,
                      ProtobufCBuffer     *buffer);
Request *
       request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   request__free_unpacked
                     (Request *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Compress_Closure)
                 (const Compress *message,
                  void *closure_data);
typedef void (*Uncompress_Closure)
                 (const Uncompress *message,
                  void *closure_data);
typedef void (*Return_Closure)
                 (const Return *message,
                  void *closure_data);
typedef void (*Request_Closure)
                 (const Request *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor compress__descriptor;
extern const ProtobufCMessageDescriptor uncompress__descriptor;
extern const ProtobufCMessageDescriptor return__descriptor;
extern const ProtobufCMessageDescriptor request__descriptor;
extern const ProtobufCEnumDescriptor    request__type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_gzip_2eproto__INCLUDED */
