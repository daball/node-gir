#include <v8.h>

#include <glib.h>
#include <girepository.h>

#ifndef GIR_ARGUMENTS_H
#define GIR_ARGUMENTS_H

namespace gir {

class Args {
  public:
    static bool ToGType(v8::Handle<v8::Value>, GIArgument *arg, GIArgInfo *info);
    static v8::Handle<v8::Value> FromGType(GIArgument *arg, GIArgInfo *info);
    static inline GITypeTag ReplaceGType(GITypeTag type);
    static bool ArrayToGList(v8::Handle<v8::Array> arr, GIArgInfo *info, GList **list_p);
    static bool ArrayToGList(v8::Handle<v8::Array> arr, GIArgInfo *info, GSList **list_p);
};

}

#endif
