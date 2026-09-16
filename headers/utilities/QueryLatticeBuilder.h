#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 12 member(s).
namespace StructuredQuery1 {
class QueryLatticeBuilder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@QueryLatticeBuilder@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@QueryLatticeBuilder@StructuredQuery1@@SAJPEAPEAV12@@Z
    static long Create(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAltPhrase@QueryLatticeBuilder@StructuredQuery1@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLattice@QueryLatticeBuilder@StructuredQuery1@@QEAAJPEAPEAVQueryWordNode@2@@Z
    long GetLattice(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAltWord@QueryLatticeBuilder@StructuredQuery1@@UEAAJKPEB_WKK@Z
    virtual long PutAltWord(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutBreak@QueryLatticeBuilder@StructuredQuery1@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@QueryLatticeBuilder@StructuredQuery1@@UEAAJKPEB_WKK@Z
    virtual long PutWord(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@QueryLatticeBuilder@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@QueryLatticeBuilder@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAltPhrase@QueryLatticeBuilder@StructuredQuery1@@UEAAJXZ
    virtual long StartAltPhrase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWordHelper@QueryLatticeBuilder@StructuredQuery1@@AEAAJKPEB_WKK@Z
    long PutWordHelper(unsigned long, wchar_t const *, unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryLatticeBuilder@StructuredQuery1@@AEAA@XZ
    ~QueryLatticeBuilder();
};
} // namespace StructuredQuery1
