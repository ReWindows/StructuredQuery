#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 20 member(s).
namespace StructuredQuery1 {
class CompoundCondition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CompoundCondition@StructuredQuery1@@UEAAJPEAPEAUICondition@@@Z
    virtual long Clone(ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CompoundCondition@StructuredQuery1@@SAJW4tagCONDITION_TYPE@@PEAUIObjectArray@@PEAVAttributeList@2@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, IObjectArray *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CompoundCondition@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CompoundCondition@StructuredQuery1@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComparisonInfo@CompoundCondition@StructuredQuery1@@UEAAJPEAPEA_WPEAW4tagCONDITION_OPERATION@@PEAUtagPROPVARIANT@@@Z
    virtual long GetComparisonInfo(wchar_t * *, int *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionType@CompoundCondition@StructuredQuery1@@UEAAJPEAW4tagCONDITION_TYPE@@@Z
    virtual long GetConditionType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputTerms@CompoundCondition@StructuredQuery1@@UEAAJPEAPEAUIRichChunk@@00@Z
    virtual long GetInputTerms(IRichChunk * *, IRichChunk * *, IRichChunk * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLeafConditionInfo@CompoundCondition@StructuredQuery1@@UEAAJPEAU_tagpropertykey@@PEAW4tagCONDITION_OPERATION@@PEAUtagPROPVARIANT@@@Z
    virtual long GetLeafConditionInfo(_tagpropertykey *, int *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocale@CompoundCondition@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetLocale(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CompoundCondition@StructuredQuery1@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubConditions@CompoundCondition@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSubConditions(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueNormalization@CompoundCondition@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetValueNormalization(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueType@CompoundCondition@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetValueType(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CompoundCondition@StructuredQuery1@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CompoundCondition@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Load(IXMLDOMNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CompoundCondition@StructuredQuery1@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CompoundCondition@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Save(IXMLDOMNode *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompoundCondition@StructuredQuery1@@AEAA@W4tagCONDITION_TYPE@@@Z
    CompoundCondition(int);
};
} // namespace StructuredQuery1
