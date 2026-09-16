#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 13 member(s).
namespace StructuredQuery1 {
class ConditionEvaluator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ConditionEvaluator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ConditionEvaluator@StructuredQuery1@@SAJPEAUILanguageResourcePool@@PEAVQueryExpressionCustomization@2@PEAPEAV12@@Z
    static long Create(ILanguageResourcePool *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatchesForCondition@ConditionEvaluator@StructuredQuery1@@QEAAJPEAUICondition2@@AEBU_tagpropertykey@@PEB_WPEAV?$GrowableBuffer@UtagHITRANGE@@@@@Z
    long FindMatchesForCondition(ICondition2*, _tagpropertykey const &, wchar_t const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPhrase@ConditionEvaluator@StructuredQuery1@@QEAAJPEB_W00_NPEAV?$GrowableBuffer@UtagHITRANGE@@@@@Z
    long FindPhrase(wchar_t const *, wchar_t const *, wchar_t const *, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSubstring@ConditionEvaluator@StructuredQuery1@@QEAAJPEB_W0K_NPEAV?$GrowableBuffer@UtagHITRANGE@@@@@Z
    long FindSubstring(wchar_t const *, wchar_t const *, unsigned long, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWildcards@ConditionEvaluator@StructuredQuery1@@QEAAJPEB_W0PEAV?$GrowableBuffer@UtagHITRANGE@@@@@Z
    long FindWildcards(wchar_t const *, wchar_t const *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ConditionEvaluator@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ConditionEvaluator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildQueryLattice@ConditionEvaluator@StructuredQuery1@@AEAAJPEB_W0PEAPEAVQueryWordNode@2@@Z
    long BuildQueryLattice(wchar_t const *, wchar_t const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyMatch@ConditionEvaluator@StructuredQuery1@@AEAAHAEBU_tagpropertykey@@0@Z
    int PropertyMatch(_tagpropertykey const &, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindMatchesForOneSegment@ConditionEvaluator@StructuredQuery1@@AEAAJPEB_W0W4tagCONDITION_OPERATION@@0KPEAV?$GrowableBuffer@UtagHITRANGE@@@@@Z
    long _FindMatchesForOneSegment(wchar_t const *, wchar_t const *, int, wchar_t const *, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindMatchesForOneString@ConditionEvaluator@StructuredQuery1@@AEAAJPEB_W0W4tagCONDITION_OPERATION@@0PEAV?$GrowableBuffer@UtagHITRANGE@@@@@Z
    long _FindMatchesForOneString(wchar_t const *, wchar_t const *, int, wchar_t const *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConditionEvaluator@StructuredQuery1@@AEAA@XZ
    ~ConditionEvaluator();
};
} // namespace StructuredQuery1
