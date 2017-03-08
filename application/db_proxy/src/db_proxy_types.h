/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef db_proxy_TYPES_H
#define db_proxy_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace mooon { namespace db_proxy {

typedef std::vector<std::string>  DBRow;

typedef std::vector<DBRow>  DBTable;

typedef struct _Condition__isset {
  _Condition__isset() : op(false), left(false), right(false), is_string(true) {}
  bool op;
  bool left;
  bool right;
  bool is_string;
} _Condition__isset;

class Condition {
 public:

  static const char* ascii_fingerprint; // = "557CE3E1F35DD5D74A3999FB1200CAB8";
  static const uint8_t binary_fingerprint[16]; // = {0x55,0x7C,0xE3,0xE1,0xF3,0x5D,0xD5,0xD7,0x4A,0x39,0x99,0xFB,0x12,0x00,0xCA,0xB8};

  Condition() : op(), left(), right(), is_string(false) {
  }

  virtual ~Condition() throw() {}

  std::string op;
  std::string left;
  std::string right;
  bool is_string;

  _Condition__isset __isset;

  void __set_op(const std::string& val) {
    op = val;
  }

  void __set_left(const std::string& val) {
    left = val;
  }

  void __set_right(const std::string& val) {
    right = val;
  }

  void __set_is_string(const bool val) {
    is_string = val;
  }

  bool operator == (const Condition & rhs) const
  {
    if (!(op == rhs.op))
      return false;
    if (!(left == rhs.left))
      return false;
    if (!(right == rhs.right))
      return false;
    if (!(is_string == rhs.is_string))
      return false;
    return true;
  }
  bool operator != (const Condition &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Condition & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Condition &a, Condition &b);

}} // namespace

#endif
