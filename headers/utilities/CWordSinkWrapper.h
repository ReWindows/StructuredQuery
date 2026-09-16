#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 10 member(s).
namespace StructuredQuery1 {
class CWordSinkWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWordSinkWrapper@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CWordSinkWrapper@StructuredQuery1@@SAJPEAUIWordSink@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IWordSink *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAltPhrase@CWordSinkWrapper@StructuredQuery1@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAltWord@CWordSinkWrapper@StructuredQuery1@@UEAAJKPEB_WKK@Z
    virtual long PutAltWord(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutBreak@CWordSinkWrapper@StructuredQuery1@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@CWordSinkWrapper@StructuredQuery1@@UEAAJKPEB_WKK@Z
    virtual long PutWord(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWordSinkWrapper@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWordSinkWrapper@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAltPhrase@CWordSinkWrapper@StructuredQuery1@@UEAAJXZ
    virtual long StartAltPhrase();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWordSinkWrapper@StructuredQuery1@@AEAA@XZ
    ~CWordSinkWrapper();
};
} // namespace StructuredQuery1
