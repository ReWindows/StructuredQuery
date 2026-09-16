#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 6 member(s).
namespace StructuredQuery1 {
class CBitsToStringsTransformer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitsToStringsTransformer@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CBitsToStringsTransformer@StructuredQuery1@@SAJAEBU_tagpropertykey@@PEBUStringPropMapping@2@KAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_tagpropertykey const &, WindissectOpaque const *, unsigned long, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitsToStringsTransformer@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitsToStringsTransformer@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformLeaf@CBitsToStringsTransformer@StructuredQuery1@@UEAAJPEAUIConditionFactory2@@PEAUICondition2@@W4SQL_GENERATION_OPTIONS@@PEAPEAU4@PEAH@Z
    virtual long TransformLeaf(IConditionFactory2*, ICondition2*, int, ICondition2* *, int *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitsToStringsTransformer@StructuredQuery1@@AEAA@AEBU_tagpropertykey@@PEBUStringPropMapping@1@K@Z
    CBitsToStringsTransformer(_tagpropertykey const &, WindissectOpaque const *, unsigned long);
};
} // namespace StructuredQuery1
