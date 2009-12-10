/*
 * pg_bulkload: include/logger.h
 *
 *	  Copyright(C) 2009, NIPPON TELEGRAPH AND TELEPHONE CORPORATION
 */

/**
 * @file
 * @brief Declaration of logger module
 *
 */
#ifndef LOGGER_H_INCLUDED
#define LOGGER_H_INCLUDED

#include "access/xact.h"
#include "access/tupdesc.h"
#include "access/htup.h"

typedef struct Logger	Logger;

extern void CreateLogger(const char *path, bool verbose);
extern void LoggerLog(int elevel, const char *fmt,...);
extern char *LoggerClose(void);

/*
 * Utilitiy functions
 */

extern char *tuple_to_cstring(TupleDesc tupdesc, HeapTuple tuple);

#endif   /* LOGGER_H_INCLUDED */