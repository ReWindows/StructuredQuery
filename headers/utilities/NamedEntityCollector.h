#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace StructuredQuery1 {
class NamedEntityCollector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@NamedEntityCollector@StructuredQuery1@@UEAAJKKKKPEAUIEntity@@PEB_WW4__MIDL___MIDL_itf_structuredquery_0000_0012_0001@@@Z
    virtual long Add(unsigned long, unsigned long, unsigned long, unsigned long, IEntity *, wchar_t const *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NamedEntityCollector@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@NamedEntityCollector@StructuredQuery1@@SAJPEAVNamedEntityCollectionUM@SemanticsUM@@PEAVSchemaEngine@4@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NamedEntityCollector@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NamedEntityCollector@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NamedEntityCollector@StructuredQuery1@@AEAA@PEAVNamedEntityCollectionUM@SemanticsUM@@PEAVSchemaEngine@3@@Z
    NamedEntityCollector(WindissectOpaque *, WindissectOpaque *);
};
} // namespace StructuredQuery1
