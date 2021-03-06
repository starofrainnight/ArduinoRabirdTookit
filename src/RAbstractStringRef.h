#ifndef _INCLUDED_CEFD8F1A5D4C11E68E7800F1F38F93EF
#define _INCLUDED_CEFD8F1A5D4C11E68E7800F1F38F93EF

#include "RGlobal.h"
#include <Printable.h>

class RAbstractStringRef : public Printable
{
public:
  RAbstractStringRef();

  virtual
  ~RAbstractStringRef();

  virtual unsigned int
  length(void) const = 0;
  virtual int
  compareTo(const RAbstractStringRef &s) const;
  virtual int
  compareTo(const char *s) const;
  unsigned char
  equals(const RAbstractStringRef &s) const;
  virtual unsigned char
  equals(const char *cstr) const;
  unsigned char
  operator ==(const RAbstractStringRef &rhs) const;
  unsigned char
  operator ==(const char *cstr) const;
  unsigned char
  operator !=(const RAbstractStringRef &rhs) const;
  unsigned char
  operator !=(const char *cstr) const;
  unsigned char
  operator <(const RAbstractStringRef &rhs) const;
  unsigned char
  operator >(const RAbstractStringRef &rhs) const;
  unsigned char
  operator <=(const RAbstractStringRef &rhs) const;
  unsigned char
  operator >=(const RAbstractStringRef &rhs) const;
  virtual unsigned char
  equalsIgnoreCase(const RAbstractStringRef &s) const;
  unsigned char
  startsWith(const RAbstractStringRef &prefix) const;
  virtual unsigned char
  startsWith(const RAbstractStringRef &prefix, unsigned int offset) const;
  unsigned char
  endsWith(const RAbstractStringRef &suffix) const;
  virtual unsigned char
  endsWith(const RAbstractStringRef &suffix, unsigned int fromIndex) const;

  // character acccess
  virtual char
  charAt(unsigned int index) const = 0;

  char
  operator [](unsigned int index) const;

  virtual void
  getBytes(unsigned char *buf, unsigned int bufsize,
           unsigned int index=0) const;

  void
  toCharArray(char *buf, unsigned int bufsize, unsigned int index=0) const;

  // search
  int
  indexOf(char ch) const;

  virtual int
  indexOf(char ch, unsigned int fromIndex) const;

  int
  indexOf(const RAbstractStringRef &str) const;

  virtual int
  indexOf(const RAbstractStringRef &str, unsigned int fromIndex) const;

  int
  lastIndexOf(char ch) const;

  virtual int
  lastIndexOf(char ch, unsigned int fromIndex) const;

  int
  lastIndexOf(const RAbstractStringRef &str) const;

  virtual int
  lastIndexOf(const RAbstractStringRef &str, unsigned int fromIndex) const;

  // Printable interface:
  size_t
  printTo(Print&p) const;
};

#endif // _INCLUDED_CEFD8F1A5D4C11E68E7800F1F38F93EF
