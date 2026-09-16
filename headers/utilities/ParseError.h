#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace StructuredQuery1 {
class ParseError {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ParseError@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ParseError@StructuredQuery1@@SAJKKW4tagSTRUCTURED_QUERY_PARSE_ERROR@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned long, unsigned long, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@ParseError@StructuredQuery1@@UEAAJPEAK0PEAPEA_WPEAUtagPROPVARIANT@@@Z
    virtual long GetData(unsigned long *, unsigned long *, wchar_t * *, tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ParseError@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ParseError@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ParseError@StructuredQuery1@@AEAA@KKW4tagSTRUCTURED_QUERY_PARSE_ERROR@@@Z
    ParseError(unsigned long, unsigned long, int);
};
} // namespace StructuredQuery1
