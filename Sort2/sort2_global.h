#ifndef SORT2_GLOBAL_H
#define SORT2_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SORT2_LIBRARY)
#  define SORT2SHARED_EXPORT Q_DECL_EXPORT
#else
#  define SORT2SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SORT2_GLOBAL_H
