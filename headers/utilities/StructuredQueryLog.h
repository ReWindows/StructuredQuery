#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 5 member(s).
class StructuredQueryLog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreateParser@StructuredQueryLog@@QEAAJPEB_WGJAEBT_LARGE_INTEGER@@1@Z
    long LogCreateParser(wchar_t const *, unsigned short, long, _LARGE_INTEGER const &, _LARGE_INTEGER const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogQuery@StructuredQueryLog@@QEAAJPEAUIQueryParser@@PEB_WJAEBT_LARGE_INTEGER@@2PEAUIQuerySolution@@@Z
    long LogQuery(IQueryParser *, wchar_t const *, long, _LARGE_INTEGER const &, _LARGE_INTEGER const &, IQuerySolution *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogResolve@StructuredQueryLog@@QEAAJPEAUICondition@@PEBU_SYSTEMTIME@@JAEBT_LARGE_INTEGER@@20@Z
    long LogResolve(ICondition *, _SYSTEMTIME const *, long, _LARGE_INTEGER const &, _LARGE_INTEGER const &, ICondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Printf@StructuredQueryLog@@QEAAJKPEB_WZZ
    long Printf(unsigned long, wchar_t const *, ...);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldLog@StructuredQueryLog@@AEAAJKPEAPEAXPEAK@Z
    long ShouldLog(unsigned long, void * *, unsigned long *);
};
