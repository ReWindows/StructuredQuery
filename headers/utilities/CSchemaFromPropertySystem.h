#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 18 member(s).
namespace StructuredQuery1 {
class CSchemaFromPropertySystem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSchemaFromPropertySystem@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSchemaFromPropertySystem@StructuredQuery1@@SAJPEAUISchemaProcessor@2@HKPEAUILanguageResourcePool@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, int, unsigned long, ILanguageResourcePool *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CSchemaFromPropertySystem@StructuredQuery1@@UEAAJPEAUIPropertySystem@@@Z
    virtual long Load(IPropertySystem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSchemaFromPropertySystem@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSchemaFromPropertySystem@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOneIndicator@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEBUKEYWORDLEXICALDATA@@KPEAHW4KEYWORD_PREPARATION_OPTIONS@@PEAUIIndicatorAccumulator@2@@Z
    long AddOneIndicator(KEYWORDLEXICALDATA const *, unsigned long, int *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEAUILanguageResourcePool@@@Z
    long Initialize(ILanguageResourcePool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalizeString@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEB_WAEBU_GUID@@PEAPEAX@Z
    long LocalizeString(wchar_t const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBooleanPrefix@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEB_WPEAUIEntityInfo@2@0PEAUIMnemonics@@0@Z
    long ProcessBooleanPrefix(wchar_t const *, WindissectOpaque *, wchar_t const *, IMnemonics *, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMnemonic@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEB_WPEAHW4KEYWORD_PREPARATION_OPTIONS@@PEAUIIndicatorAccumulator@2@@Z
    long ProcessMnemonic(wchar_t const *, int *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMnemonics@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEAUIMnemonics@@PEAH1W4KEYWORD_PREPARATION_OPTIONS@@PEAUIIndicatorAccumulator@2@@Z
    long ProcessMnemonics(IMnemonics *, int *, int *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessNamedEntities@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEB_WW4PROPDESC_DISPLAYTYPE@@0GPEAUIPropertyEnumTypeList@@PEAPEA_W@Z
    long ProcessNamedEntities(wchar_t const *, int, wchar_t const *, unsigned short, IPropertyEnumTypeList *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessProperty@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEAUIPropertyDescription@@@Z
    long ProcessProperty(IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSemanticType@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEAUISemanticType@@@Z
    long ProcessSemanticType(ISemanticType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSyntaxElement@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEBUSYNTAX_ELEMENT_INFO@2@@Z
    long ProcessSyntaxElement(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WordBreak@CSchemaFromPropertySystem@StructuredQuery1@@AEAAJPEBUKEYWORDLEXICALDATA@@KAEBU_GUID@@PEAPEAX@Z
    long WordBreak(KEYWORDLEXICALDATA const *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WritePropVariantForNamedEntity@CSchemaFromPropertySystem@StructuredQuery1@@CAJAEBUtagPROPVARIANT@@PEB_W1PEA_W_KPEAPEA_WPEA_K@Z
    static long WritePropVariantForNamedEntity(tagPROPVARIANT const &, wchar_t const *, wchar_t const *, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSchemaFromPropertySystem@StructuredQuery1@@AEAA@XZ
    ~CSchemaFromPropertySystem();
};
} // namespace StructuredQuery1
