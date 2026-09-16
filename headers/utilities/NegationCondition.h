#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 20 member(s).
namespace StructuredQuery1 {
class NegationCondition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@NegationCondition@StructuredQuery1@@UEAAJPEAPEAUICondition@@@Z
    virtual long Clone(ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@NegationCondition@StructuredQuery1@@SAJPEAUICondition@@PEAVAttributeList@2@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(ICondition *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@NegationCondition@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@NegationCondition@StructuredQuery1@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComparisonInfo@NegationCondition@StructuredQuery1@@UEAAJPEAPEA_WPEAW4tagCONDITION_OPERATION@@PEAUtagPROPVARIANT@@@Z
    virtual long GetComparisonInfo(wchar_t * *, int *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionType@NegationCondition@StructuredQuery1@@UEAAJPEAW4tagCONDITION_TYPE@@@Z
    virtual long GetConditionType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputTerms@NegationCondition@StructuredQuery1@@UEAAJPEAPEAUIRichChunk@@00@Z
    virtual long GetInputTerms(IRichChunk * *, IRichChunk * *, IRichChunk * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLeafConditionInfo@NegationCondition@StructuredQuery1@@UEAAJPEAU_tagpropertykey@@PEAW4tagCONDITION_OPERATION@@PEAUtagPROPVARIANT@@@Z
    virtual long GetLeafConditionInfo(_tagpropertykey *, int *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocale@NegationCondition@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetLocale(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@NegationCondition@StructuredQuery1@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubConditions@NegationCondition@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSubConditions(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueNormalization@NegationCondition@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetValueNormalization(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueType@NegationCondition@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetValueType(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@NegationCondition@StructuredQuery1@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@NegationCondition@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Load(IXMLDOMNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@NegationCondition@StructuredQuery1@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@NegationCondition@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Save(IXMLDOMNode *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NegationCondition@StructuredQuery1@@EEAA@XZ
    virtual ~NegationCondition();
};
} // namespace StructuredQuery1
