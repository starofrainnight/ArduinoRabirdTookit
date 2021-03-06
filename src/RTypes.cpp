#include "RGlobal.h"
#include "RObject.h"
#include "RThread.h"

bool
rIsObjectInSameThread(const RObject *left, const RObject *right)
{
  if((NULL == left) || (NULL == right))
  {
    return false;
  }

  return (left->thread()->id() == right->thread()->id());
}

bool
rIsObjectInCurrentThread(const RObject *object)
{
  return RThread::currentThreadId() == object->thread()->id();
}
