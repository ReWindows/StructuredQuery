#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 12 member(s).
namespace SemanticsUM {
class SchemaBinary {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SchemaBinary@SemanticsUM@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@SchemaBinary@SemanticsUM@@QEAAJPEAUISequentialStream@@@Z
    long Load(ISequentialStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadBinary@SchemaBinary@SemanticsUM@@QEAAJPEB_W@Z
    long LoadBinary(wchar_t const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SchemaBinary@SemanticsUM@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SchemaBinary@SemanticsUM@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@SchemaBinary@SemanticsUM@@QEBAJPEAUISequentialStream@@@Z
    long Save(ISequentialStream *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveBinary@SchemaBinary@SemanticsUM@@QEBAJPEB_W@Z
    long SaveBinary(wchar_t const *) const;
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SchemaBinary@SemanticsUM@@AEAA@XZ
    SchemaBinary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearMemoryMappedCache@SchemaBinary@SemanticsUM@@AEBAJPEB_W@Z
    long _ClearMemoryMappedCache(wchar_t const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadFromMemoryMappedCache@SchemaBinary@SemanticsUM@@AEAAJPEB_W@Z
    long _LoadFromMemoryMappedCache(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveToMemoryMappedCache@SchemaBinary@SemanticsUM@@AEBAJPEB_WPEAUIStream@@@Z
    long _SaveToMemoryMappedCache(wchar_t const *, IStream *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SchemaBinary@SemanticsUM@@AEAA@XZ
    ~SchemaBinary();
};
} // namespace SemanticsUM
