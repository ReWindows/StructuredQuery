#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace StructuredQuery1 {
class ScopeTransformer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ScopeTransformer@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ScopeTransformer@StructuredQuery1@@SAJ_NPEAPEAV12@@Z
    static long Create(bool, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ScopeTransformer@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ScopeTransformer@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformLeaf@ScopeTransformer@StructuredQuery1@@UEAAJPEAUIConditionFactory2@@PEAUICondition2@@W4SQL_GENERATION_OPTIONS@@PEAPEAU4@PEAH@Z
    virtual long TransformLeaf(IConditionFactory2*, ICondition2*, int, ICondition2* *, int *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScopeTransformer@StructuredQuery1@@AEAA@_N@Z
    ScopeTransformer(bool);
};
} // namespace StructuredQuery1
