#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 13 member(s).
namespace StructuredQuery1 {
class ParseTracer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ParseTracer@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ParseTracer@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ParseTracer@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ParseTracer@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteConditionXml@ParseTracer@StructuredQuery1@@UEAAJPEAXPEAUICondition@@@Z
    virtual long WriteConditionXml(void *, ICondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteParseResultXml@ParseTracer@StructuredQuery1@@UEAAJPEAXPEAUIEnumUnknown@@PEAUICondition@@@Z
    virtual long WriteParseResultXml(void *, IEnumUnknown *, ICondition *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@ParseTracer@StructuredQuery1@@AEAAJPEAXPEB_WZZ
    long Format(void *, wchar_t const *, ...);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ParseTracer@StructuredQuery1@@AEAA@XZ
    ParseTracer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAttribute@ParseTracer@StructuredQuery1@@AEAAJPEAXPEB_W1@Z
    long WriteAttribute(void *, wchar_t const *, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteCondition@ParseTracer@StructuredQuery1@@AEAAJPEAXPEAUICondition@@H@Z
    long WriteCondition(void *, ICondition *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteErrors@ParseTracer@StructuredQuery1@@AEAAJPEAXPEAUIEnumUnknown@@H@Z
    long WriteErrors(void *, IEnumUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteLeafCondition@ParseTracer@StructuredQuery1@@AEAAJPEAXPEAUICondition@@H@Z
    long WriteLeafCondition(void *, ICondition *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteTerm@ParseTracer@StructuredQuery1@@AEAAJPEAXPEAUIRichChunk@@@Z
    long WriteTerm(void *, IRichChunk *);
};
} // namespace StructuredQuery1
