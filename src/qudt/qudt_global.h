#ifndef QUDT_GLOBAL_H
#define QUDT_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef QUDT_LIB
# define QUDT_EXPORT Q_DECL_EXPORT
#else
# define QUDT_EXPORT Q_DECL_IMPORT
#endif

#endif//QUDT_GLOBAL_H
